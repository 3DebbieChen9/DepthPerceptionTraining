using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace DepthPerceptionSystem
{
    public enum SystemMode
    {
        StartMode,
        ExperimentSettingMode,
        CalibrationMode,
        SelectionMode,
        PunchSettingMode,
        TestingMode,
        TrainingMode_Baseline_A,
        TrainingMode_Ring_B,
        TrainingMode_Bar_C,
        TrainingMode_Cutout_D,
    }

    public enum MovingDirection
    {
        Forward,
        Backward,
        Random,
    }

    public enum Hand
    {
        Right,
        Left,
        Both,
        None,
    }

    public enum CalibrationState
    {
        MovableRange,
        TPose_RHand,
        TPose_LHand,
        ArmStraight_RHand,
        ArmStraight_LHand,
        IdlePose,
    }

    public enum SelectionState
    {
        // Noitom,
        Place,
        Handedness,
        SelectSpeed,
        SelectDirection,
        SelectMode,
        SelectTrainMethod,
    }

    public enum PlayingState
    {
        idle, // 剛進到 Scene / 從頭開始
        begin, // 按下按鈕開始測試
        ready, // 準備階段(倒數計時)
        tentative, // unit 一開始，coach 2~3秒內隨機原地晃動
        reaction, // unit中，等待反應結束
        comment, // Training 中，播放評語的階段 (評語播完才回到 ready or result)
        result // 每個 unit 結束後的最終結果
    }

    public enum ReactionTimeWarning
    {
        none,
        first,
        second,
    }

    public enum MovingSpeed
    {
        Slowest, // Coach move with the slowest speed
        Fastest, // Coach move with the fastest speed
        Random, // Coach move with random speed
    }

    public enum SettingState
    {
        UserSize,
        CoachSize,
        MovingSpeed,
        ControllerVibartion,
        TestingMode,
        StraightCollecting,
        StraightDataResult,
    }

    public class MovableRange
    {
        public float minRequiredLengthInVR;
        public float detectedLengthInVR;
        public float length; // Use to set the target movement range

        public MovableRange(int a = 0)
        {
            this.minRequiredLengthInVR = 4.0f;
            this.detectedLengthInVR = 0.0f;
            this.length = 4.0f;
        }
    }

    public class UserBodySize
    {
        public float armLength; // Use to set the default distance between Interaction Objects, Coach
        public float centerEyeToControllerLength; // Use to calculate the shoulder width
        public float shoulderWidth; // Use to set the user's center collider radius  (To determine whether the user's location is as commanded)
        public float height; // CenterEye.Y + SettingInfo.avgDistanceBetweenEyesAndTopHead
        public float idlePoseRadius; // Use to determine whether the user is punching

        public UserBodySize()
        {
            this.armLength = 0.5f;
            this.centerEyeToControllerLength = 0.66f;
            this.shoulderWidth = 0.26f;
            this.height = 1.55f;
            this.idlePoseRadius = 0.5f;
        }

    }
    public class ArmRotationAngle
    {
        public float forward;
        public float up;
        public float right;

        public ArmRotationAngle(float _forward, float _up, float _right)
        {
            this.forward = _forward;
            this.up = _up;
            this.right = _right;
        }

        public void initial()
        {
            this.forward = 0.0f;
            this.up = 0.0f;
            this.right = 0.0f;
        }

        public string angleToString()
        {
            return $"F: {this.forward:F2}, U: {this.up:F2}, R: {this.right:F2}";
        }
    }
    public class UserArmStraightAngle
    {
        public ArmRotationAngle rightNoitom;
        public ArmRotationAngle leftNoitom;
        public ArmRotationAngle rightIK;
        public ArmRotationAngle leftIK;

        public UserArmStraightAngle()
        {
            this.rightNoitom = new ArmRotationAngle(90.0f, 90.0f, 180.0f);
            this.leftNoitom = new ArmRotationAngle(90.0f, 90.0f, 0.0f);
            this.rightIK = new ArmRotationAngle(90.0f, 90.0f, 180.0f);
            this.leftIK = new ArmRotationAngle(90.0f, 90.0f, 0.0f);
        }
    }
    public class UserInfo
    {
        public MovableRange movableRange;
        public UserBodySize userBodySize;
        public UserArmStraightAngle userArmStraightAngle;

        public UserInfo(int a = 0)
        {
            this.movableRange = new MovableRange();
            this.userBodySize = new UserBodySize();
            this.userArmStraightAngle = new UserArmStraightAngle();
        }
    }

    public class SelectionInfo
    {
        public bool isUsingNoitom;
        public bool isOnRing;
        public bool coachIsLeftHanded;
        public SystemMode selectedMode;
        public MovingSpeed selectedSpeed;
        public MovingDirection selectedCoachDirection; // For the 7th trail


        public SelectionInfo()
        {
            this.isUsingNoitom = false;
            this.isOnRing = true;
            this.coachIsLeftHanded = false;
            this.selectedMode = SystemMode.CalibrationMode;
            this.selectedSpeed = MovingSpeed.Slowest;
            this.selectedCoachDirection = MovingDirection.Random;
        }
    }

    public class CoachMovingSpeed
    {
        public float forwardMax;
        public float forwardMin;
        public float backwardMax;
        public float backwardMin;

        public CoachMovingSpeed()
        {
            this.forwardMax = 0.6f;
            this.forwardMin = 0.4f;
            this.backwardMax = 0.8f;
            this.backwardMin = 0.4f;
        }
    }
    public class CoachDefaultValue
    {
        public float avtarCenterToEdgeLength;
        public float avtarDefaultHeight;
        public float heightDifferenceWithUser;
        public float distanceToUserMultiple;
        public CoachMovingSpeed movingSpeed;

        public CoachDefaultValue()
        {
            this.avtarCenterToEdgeLength = 0.43f;
            this.avtarDefaultHeight = 1.90f;
            this.heightDifferenceWithUser = 0.05f;
            this.distanceToUserMultiple = 1.5f;
            this.movingSpeed = new CoachMovingSpeed();
        }
    }

    public enum ExperimentSection
    {
        PreTest,
        Training_1,
        Training_2,
        Training_3,
        Training_4,
        PostTest,
        Experience,
    }
    public class CoachMovement
    {
        public MovingDirection direction;
        public Hand target;

        public CoachMovement(MovingDirection _direction, Hand _target)
        {
            this.direction = _direction;
            this.target = _target;
        }
    }

    public class CoachMovementType
    {
        public CoachMovement[] movements;
        public CoachMovementType(int group)
        {
            this.movements = new CoachMovement[7];
            switch (group)
            {
                case 0:
                    this.movements[0] = new CoachMovement(MovingDirection.Forward, Hand.Right);
                    this.movements[1] = new CoachMovement(MovingDirection.Forward, Hand.Right);
                    this.movements[2] = new CoachMovement(MovingDirection.Forward, Hand.Left);
                    this.movements[3] = new CoachMovement(MovingDirection.Forward, Hand.Left);
                    this.movements[4] = new CoachMovement(MovingDirection.Backward, Hand.Right);
                    this.movements[5] = new CoachMovement(MovingDirection.Backward, Hand.Right);
                    this.movements[6] = new CoachMovement(MovingDirection.Backward, Hand.Left);
                    break;
                case 1:
                    this.movements[0] = new CoachMovement(MovingDirection.Forward, Hand.Right);
                    this.movements[1] = new CoachMovement(MovingDirection.Forward, Hand.Right);
                    this.movements[2] = new CoachMovement(MovingDirection.Forward, Hand.Left);
                    this.movements[3] = new CoachMovement(MovingDirection.Backward, Hand.Right);
                    this.movements[4] = new CoachMovement(MovingDirection.Backward, Hand.Right);
                    this.movements[5] = new CoachMovement(MovingDirection.Backward, Hand.Left);
                    this.movements[6] = new CoachMovement(MovingDirection.Backward, Hand.Left);
                    break;
                case 2:
                    this.movements[0] = new CoachMovement(MovingDirection.Forward, Hand.Right);
                    this.movements[1] = new CoachMovement(MovingDirection.Forward, Hand.Right);
                    this.movements[2] = new CoachMovement(MovingDirection.Forward, Hand.Left);
                    this.movements[3] = new CoachMovement(MovingDirection.Forward, Hand.Left);
                    this.movements[4] = new CoachMovement(MovingDirection.Backward, Hand.Right);
                    this.movements[5] = new CoachMovement(MovingDirection.Backward, Hand.Left);
                    this.movements[6] = new CoachMovement(MovingDirection.Backward, Hand.Left);
                    break;
                default:
                    this.movements[0] = new CoachMovement(MovingDirection.Forward, Hand.Right);
                    this.movements[1] = new CoachMovement(MovingDirection.Forward, Hand.Left);
                    this.movements[2] = new CoachMovement(MovingDirection.Forward, Hand.Left);
                    this.movements[3] = new CoachMovement(MovingDirection.Backward, Hand.Right);
                    this.movements[4] = new CoachMovement(MovingDirection.Backward, Hand.Right);
                    this.movements[5] = new CoachMovement(MovingDirection.Backward, Hand.Left);
                    this.movements[6] = new CoachMovement(MovingDirection.Backward, Hand.Left);
                    break;
            }

        }
    }

    public class CoachType
    {
        public Hand handedness;
        public CoachMovement[] coachMovements;

        public CoachType()
        {
            this.handedness = Hand.Left;
            this.coachMovements = new CoachMovement[7];
        }
    }

    public class ExperimentSetting
    {
        public int subjectID;
        public ExperimentSection experimentSection;
        public SystemMode experimentMode;
        public int[] selectedCoachTypes;
        public float reactionTimeStandard;
        public int experimentTrial;
        public CoachType[] coachTypes;

        public ExperimentSetting()
        {
            this.subjectID = 0;
            this.experimentSection = ExperimentSection.PreTest;
            this.experimentMode = SystemMode.TestingMode;
            this.experimentTrial = 0;
            this.selectedCoachTypes = new int[4];
            for (int i = 0; i < 4; i++)
            {
                this.selectedCoachTypes[i] = 0;
            }

            this.coachTypes = new CoachType[8];
            for (int i = 0; i < 8; i++)
            {
                this.coachTypes[i] = new CoachType();
            }
            this.coachTypes[0].handedness = Hand.Left;
            this.coachTypes[0].coachMovements = new CoachMovementType(0).movements;
            this.coachTypes[1].handedness = Hand.Left;
            this.coachTypes[1].coachMovements = new CoachMovementType(1).movements;
            this.coachTypes[2].handedness = Hand.Left;
            this.coachTypes[2].coachMovements = new CoachMovementType(2).movements;
            this.coachTypes[3].handedness = Hand.Left;
            this.coachTypes[3].coachMovements = new CoachMovementType(3).movements;
            this.coachTypes[4].handedness = Hand.Right;
            this.coachTypes[4].coachMovements = new CoachMovementType(0).movements;
            this.coachTypes[5].handedness = Hand.Right;
            this.coachTypes[5].coachMovements = new CoachMovementType(1).movements;
            this.coachTypes[6].handedness = Hand.Right;
            this.coachTypes[6].coachMovements = new CoachMovementType(2).movements;
            this.coachTypes[7].handedness = Hand.Right;
            this.coachTypes[7].coachMovements = new CoachMovementType(3).movements;

        }
    }
    public class PlayingModeSetting
    {
        public float testingReadyTime;
        public float trainingReadyTime;
        public float tentativeTimeMin;
        public float tentativeTimeMax;
        public float idealUnitTimeLimit; // The coach required time limit is 2 seconds
        public float testingUnitTimeLimit; // Over the time limit, means the task is fail
        public float trainingUnitTimeLimit; // Over the time limit, means the task is fail
        public int targetNumberOfTasks; // User should do 'targetNumberOTasks' to complete the test 7

        public PlayingModeSetting()
        {
            this.testingReadyTime = 4.0f;
            this.trainingReadyTime = 4.0f;
            this.tentativeTimeMin = 1.0f;
            this.tentativeTimeMax = 2.0f;
            this.idealUnitTimeLimit = 2.0f; // The coach required time limit is 2 seconds
            this.testingUnitTimeLimit = 4.0f;
            this.trainingUnitTimeLimit = 4.0f;
            this.targetNumberOfTasks = 7;
        }
    }

    public class EvaluationThreshold
    {
        public float radiusBetweenOriginAndUser;
        public float handStraightAngle;

        public EvaluationThreshold(int a = 0)
        {
            this.radiusBetweenOriginAndUser = 0.2f;
            this.handStraightAngle = 20.0f;
        }
    }
    public class ControllerVibration
    {
        public float amplitude;
        public float frequency;

        public ControllerVibration(int a = 0)
        {
            this.amplitude = 1.0f;
            this.frequency = 1.0f;
        }
    }
    public class SettingInfo
    {
        public float userAvgDistanceBetweenEyesAndTopHead;
        public ControllerVibration controllerVibration; // Ranger from 0.0f to 1.0f
        public CoachDefaultValue coachDefaultValue;
        public EvaluationThreshold evaluationThreshold;
        public PlayingModeSetting playingModeSetting;
        public float auditoryReactionTime;

        public SettingInfo(int a = 0)
        {
            this.userAvgDistanceBetweenEyesAndTopHead = 0.11f;
            this.controllerVibration = new ControllerVibration();
            this.coachDefaultValue = new CoachDefaultValue();
            this.evaluationThreshold = new EvaluationThreshold();
            this.playingModeSetting = new PlayingModeSetting();
            this.auditoryReactionTime = 0.284f;
        }
    }

    public class TotalUnitResult
    {
        public int numberOfTasks;

        public int numberOfMoving;
        public int numberOfPunching;
        public int numberOfMovingCorrectly;
        public int numberOfReach;
        public int numberOfSuccess; // Reach + Arm Straight

        public int numberOfOverTime;
        public float totalReactionTime;
        public float averageReactionTime;
        public int totalScore;

        public List<UnitResult> unitResultList;

        public TotalUnitResult(int a = 0)
        {
            this.numberOfTasks = 0;

            this.numberOfMoving = 0;
            this.numberOfPunching = 0;
            this.numberOfMovingCorrectly = 0;
            this.numberOfReach = 0;
            this.numberOfSuccess = 0;

            this.numberOfOverTime = 0;
            this.totalReactionTime = 0.0f;
            this.averageReactionTime = 0.0f;
            this.totalScore = 0;
            this.unitResultList = new List<UnitResult>();
        }

        public void addUnitResult(UnitResult unitResult)
        {
            UnitResult tmp = new UnitResult(unitResult.unitNum,
                                            unitResult.isMoving, unitResult.isPunching, unitResult.isReach, unitResult.isStraight, unitResult.isReacting, unitResult.isMovingCorrectly, unitResult.isSuccess, unitResult.isOverTime,
                                            unitResult.reactionTime, unitResult.score,
                                            unitResult.coachHandedness, unitResult.coachTargetShoulder, unitResult.coachMovingDirection,
                                            unitResult.punchHand, unitResult.armRotationAngle, unitResult.userMovingDirection,
                                            unitResult.distanceToLeftShoulder, unitResult.distanceToRightShoulder,
                                            unitResult.startingPosition_x, unitResult.startingPosition_y, unitResult.startingPosition_z,
                                            unitResult.punchingPosition_x, unitResult.punchingPosition_y, unitResult.punchingPosition_z,
                                            unitResult.startForwardVector_x, unitResult.startForwardVector_y, unitResult.startForwardVector_z,
                                            unitResult.movingAngle);
            this.unitResultList.Add(tmp);
        }

        public void reset()
        {
            this.numberOfTasks = 0;

            this.numberOfMoving = 0;
            this.numberOfPunching = 0;
            this.numberOfMovingCorrectly = 0;
            this.numberOfReach = 0;
            this.numberOfSuccess = 0;

            this.numberOfOverTime = 0;
            this.totalReactionTime = 0.0f;
            this.averageReactionTime = 0.0f;
            this.totalScore = 0;
            this.unitResultList.Clear();
        }
    }

    public class UnitResult
    {
        public int unitNum;
        public bool isMoving;
        public bool isMovingCorrectly;
        public bool isPunching;
        public bool isReach;
        public bool isStraight;
        public bool isSuccess;

        public bool isReacting;
        public bool isOverTime;

        public float reactionTime;
        public int score;

        public Hand coachHandedness;
        public Hand coachTargetShoulder;
        public MovingDirection coachMovingDirection;

        public Hand punchHand;
        public ArmRotationAngle armRotationAngle;
        public MovingDirection userMovingDirection;
        public float distanceToLeftShoulder;
        public float distanceToRightShoulder;

        public float startingPosition_x;
        public float startingPosition_y;
        public float startingPosition_z;
        public float punchingPosition_x;
        public float punchingPosition_y;
        public float punchingPosition_z;
        public float startForwardVector_x;
        public float startForwardVector_y;
        public float startForwardVector_z;
        public float movingAngle;


        public UnitResult()
        {
            this.unitNum = 0;
            this.isMoving = false;
            this.isPunching = false;
            this.isReach = false;
            this.isStraight = false;

            this.isReacting = false;
            this.isMovingCorrectly = false;
            this.isSuccess = false;

            this.isOverTime = false;
            this.reactionTime = 0.0f;
            this.score = 0;

            this.coachHandedness = Hand.None;
            this.coachTargetShoulder = Hand.None;
            this.coachMovingDirection = MovingDirection.Random;

            this.punchHand = Hand.None;
            this.armRotationAngle = new ArmRotationAngle(0.0f, 0.0f, 0.0f);
            this.userMovingDirection = MovingDirection.Random;
            this.distanceToLeftShoulder = 0.0f;
            this.distanceToRightShoulder = 0.0f;

            this.startingPosition_x = 0.0f;
            this.startingPosition_y = 0.0f;
            this.startingPosition_z = 0.0f;
            this.punchingPosition_x = 0.0f;
            this.punchingPosition_y = 0.0f;
            this.punchingPosition_z = 0.0f;
            this.startForwardVector_x = 0.0f;
            this.startForwardVector_y = 0.0f;
            this.startForwardVector_z = 0.0f;
            this.movingAngle = 0.0f;
        }

        public UnitResult(int _unitNum, bool _isMoving, bool _isPunching, bool _isReach,
                            bool _isStraight, bool _isReacting, bool _isMovingCorrectly, bool _isSuccess,
                            bool _isOverTime, float _reactionTime, int _score,
                            Hand _coachHandedness, Hand _coachTargetShoulder, MovingDirection _coachMovingDirection,
                            Hand _punchHand, ArmRotationAngle _armRotationAngle, MovingDirection _userMovingDirection,
                            float _distanceToLeftShoulder, float _directionToRightShoulder,
                            float _startingPositition_x, float _startingPositition_y, float _startingPositition_z,
                            float _punchingPositition_x, float _punchingPositition_y, float _punchingPositition_z,
                            float _startForwardVector_x, float _startForwardVector_y, float _startForwardVector_z,
                            float _movingAngle)
        {
            this.unitNum = _unitNum;
            this.isMoving = _isMoving;
            this.isPunching = _isPunching;
            this.isReach = _isReach;
            this.isStraight = _isStraight;

            this.isReacting = _isReacting;
            this.isMovingCorrectly = _isMovingCorrectly;
            this.isSuccess = _isSuccess;

            this.isOverTime = _isOverTime;
            this.reactionTime = _reactionTime;
            this.score = _score;

            this.coachHandedness = _coachHandedness;
            this.coachTargetShoulder = _coachTargetShoulder;
            this.coachMovingDirection = _coachMovingDirection;

            this.punchHand = _punchHand;
            this.armRotationAngle = _armRotationAngle;
            this.userMovingDirection = _userMovingDirection;
            this.distanceToLeftShoulder = _distanceToLeftShoulder;
            this.distanceToRightShoulder = _directionToRightShoulder;

            this.startingPosition_x = _startingPositition_x;
            this.startingPosition_y = _startingPositition_y;
            this.startingPosition_z = _startingPositition_z;
            this.punchingPosition_x = _punchingPositition_x;
            this.punchingPosition_y = _punchingPositition_y;
            this.punchingPosition_z = _punchingPositition_z;
            this.startForwardVector_x = _startForwardVector_x;
            this.startForwardVector_y = _startForwardVector_y;
            this.startForwardVector_z = _startForwardVector_z;
            this.movingAngle = _movingAngle;
        }

        public void reset()
        {
            this.unitNum = 0;
            this.isMoving = false;
            this.isPunching = false;
            this.isReach = false;
            this.isStraight = false;

            this.isReacting = false;
            this.isMovingCorrectly = false;
            this.isSuccess = false;

            this.isOverTime = false;
            this.reactionTime = 0.0f;
            this.score = 0;

            this.coachHandedness = Hand.None;
            this.coachTargetShoulder = Hand.None;
            this.coachMovingDirection = MovingDirection.Random;

            this.punchHand = Hand.None;
            this.armRotationAngle = new ArmRotationAngle(0.0f, 0.0f, 0.0f);
            this.userMovingDirection = MovingDirection.Random;
            this.distanceToLeftShoulder = 0.0f;
            this.distanceToRightShoulder = 0.0f;

            this.startingPosition_x = 0.0f;
            this.startingPosition_y = 0.0f;
            this.startingPosition_z = 0.0f;
            this.punchingPosition_x = 0.0f;
            this.punchingPosition_y = 0.0f;
            this.punchingPosition_z = 0.0f;
            this.startForwardVector_x = 0.0f;
            this.startForwardVector_y = 0.0f;
            this.startForwardVector_z = 0.0f;
            this.movingAngle = 0.0f;
        }
    }

    public class UnitResultComment
    {
        public int score;
        public List<string> comments;

        public UnitResultComment(int a = 0)
        {
            this.score = 0;
            this.comments = new List<string>();
        }
    }
    public class Timer
    {
        public bool timerOn;
        public float timeTarget; // in seconds // count-up: timeTarget = over-time
        public float timeLeft; // in seconds // count-up: timeLeft = 0.0
        public bool countDown;

        public Timer(bool _timerOn, bool _countDown, float _timeTarget, float _timeLeft)
        {
            this.timerOn = _timerOn;
            this.countDown = _countDown;
            this.timeTarget = _timeTarget;
            this.timeLeft = _timeLeft;
        }

        public void ResetTimer()
        {
            this.timerOn = false;
            if (this.countDown)
            {
                this.timeLeft = this.timeTarget;
            }
            else
            {
                this.timeLeft = 0.0f;
            }
        }

        public void StartTimer()
        {
            this.timerOn = true;
        }
    }

    public class PunchStraightUnit
    {
        public float handStraightAngleThreshold;
        public bool systemJudgeAsStraight;
        public bool coachJudgeAsStraight;
        public Hand hand;
        public ArmRotationAngle armRotationAngle;

        public PunchStraightUnit()
        {
            this.handStraightAngleThreshold = 0.0f;
            this.systemJudgeAsStraight = false;
            this.coachJudgeAsStraight = false;
            this.hand = new Hand();
            this.armRotationAngle = new ArmRotationAngle(0.0f, 0.0f, 0.0f);
        }
        public PunchStraightUnit(float _angleThreshold, bool _systemJudgeAsStraight, bool _coachJudgeAsStraight, Hand _hand, ArmRotationAngle _armRotationAngle)
        {
            this.handStraightAngleThreshold = _angleThreshold;
            this.systemJudgeAsStraight = _systemJudgeAsStraight;
            this.coachJudgeAsStraight = _coachJudgeAsStraight;
            this.hand = _hand;
            this.armRotationAngle = _armRotationAngle;
        }
    }
    public class PunchStraightUnitTest
    {
        public float userHeight;
        public float userArmLength;
        public UserArmStraightAngle initialUserArmStraightAngle;
        public UserArmStraightAngle updatedUserArmStraightAngle;
        public List<PunchStraightUnit> punchStraightUnitList;

        public PunchStraightUnitTest()
        {
            this.userHeight = 0.0f;
            this.userArmLength = 0.0f;
            this.initialUserArmStraightAngle = new UserArmStraightAngle();
            this.updatedUserArmStraightAngle = new UserArmStraightAngle();
            this.punchStraightUnitList = new List<PunchStraightUnit>();
        }
        public void addUnitResult(PunchStraightUnit unit)
        {
            PunchStraightUnit tmp = new PunchStraightUnit(unit.handStraightAngleThreshold, unit.systemJudgeAsStraight, unit.coachJudgeAsStraight, unit.hand, unit.armRotationAngle);
            this.punchStraightUnitList.Add(tmp);
        }

        public void reset()
        {
            this.userHeight = 0.0f;
            this.userArmLength = 0.0f;
            this.punchStraightUnitList.Clear();
        }
    }

    [System.Serializable]
    public class Sound
    {
        public string name;
        public AudioClip clip;
    }
}
