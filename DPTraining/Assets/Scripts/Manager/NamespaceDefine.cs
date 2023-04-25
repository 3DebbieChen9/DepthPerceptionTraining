using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace DepthPerceptionSystem
{
    public enum SystemMode {
        StartMode,
        CalibrationMode,
        SelectionMode,
        SettingMode,
        TestingMode,
        TrainingMode,
        TrainingHintMode,
    }

    public enum MovingDirection {
        Forward,
        Backward,
    }

    public enum Hand {
        Right,
        Left,
    }

    public enum CalibrationState {
        MovableRange,
        TPose_RHand,
        TPose_LHand,
        ArmStraight_RHand,
        ArmStraight_LHand,
        IdlePose,
    }

    public enum SelectionState {
        // Noitom,
        Place,
        Handedness,
        SelectMode,
    }

    public enum TestingState {
        idle, // 剛進到 TestingMode Scene / 從頭開始
        begin, // 按下按鈕開始測試
        ready, // 準備階段(倒數計時)
        tentative, // unit 一開始，coach 2~3秒內隨機原地晃動
        reaction, // unit中，等待反應結束
        result // 每個 unit 結束後的最終結果
    }
    public enum TestLevel {
        Easy,
        Medium,
        Hard,
    }

    public enum SettingState {
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

        public MovableRange(int a = 0) {
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

        public UserBodySize(int a = 0) {
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

        public ArmRotationAngle(float _forward, float _up, float _right) {
            this.forward = _forward;
            this.up = _up;
            this.right = _right;
        }

        public void initial() {
            this.forward = 0.0f;
            this.up = 0.0f;
            this.right = 0.0f;
        }
    }
    public class UserArmStraightAngle
    {
        public ArmRotationAngle rightNoitom;
        public ArmRotationAngle leftNoitom;
        public ArmRotationAngle rightIK;
        public ArmRotationAngle leftIK;

        public UserArmStraightAngle() {
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

        public UserInfo(int a = 0) { 
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

        public SelectionInfo() {
            this.isUsingNoitom = false;
            this.isOnRing = false;
            this.coachIsLeftHanded = true;
            this.selectedMode = SystemMode.CalibrationMode;
        }
    }

    public class CoachMovingSpeed 
    {
        public float forwardMax;
        public float forwardMin;
        public float backwardMax;
        public float backwardMin;

        public CoachMovingSpeed() {
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

        public CoachDefaultValue() {
            this.avtarCenterToEdgeLength = 0.43f;
            this.avtarDefaultHeight = 1.90f;
            this.heightDifferenceWithUser = 0.05f;
            this.distanceToUserMultiple = 1.5f;
            this.movingSpeed = new CoachMovingSpeed();
        }
    }

    public class TestingModeSetting 
    {
        public float readyTime;
        public float tentativeTimeMin;
        public float tentativeTimeMax;
        public float unitTimeLimit; // Over the time limit, means the task is fail
        public int targetNumberOfTasks; // User should do 'targetNumberOTasks' to complete the test 7
        
        public TestingModeSetting() {
            this.readyTime = 4.0f;
            this.tentativeTimeMin = 2.0f;
            this.tentativeTimeMax = 3.0f;
            this.unitTimeLimit = 2.0f;
            this.targetNumberOfTasks = 7;
        }
    }

    public class TrainModeSetting 
    {
        public float readyTime;
        public float tentativeTimeMin;
        public float tentativeTimeMax;
        public float unitTimeLimit; // Over the time limit, means the task is fail
        public int targetNumberOfTasks; // User should do 'targetNumberOTasks' to complete the test 7
        
        public TrainModeSetting() {
            this.readyTime = 6.0f;
            this.tentativeTimeMin = 2.0f;
            this.tentativeTimeMax = 3.0f;
            this.unitTimeLimit = 2.0f;
            this.targetNumberOfTasks = 7;
        }
    }

    public class EvaluationThreshold
    {
        public float radiusBetweenOriginAndUser;
        public float handStraightAngle;

        public EvaluationThreshold(int a = 0) {
            this.radiusBetweenOriginAndUser = 0.15f;
            this.handStraightAngle = 20.0f;
        }
    }
    public class ControllerVibration {
        public float amplitude;
        public float frequency;

        public ControllerVibration(int a = 0) { 
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
        public TestingModeSetting testingModeSetting;
        
        public SettingInfo(int a = 0) {
            this.userAvgDistanceBetweenEyesAndTopHead = 0.11f;
            this.controllerVibration = new ControllerVibration();
            this.coachDefaultValue = new CoachDefaultValue();
            this.evaluationThreshold = new EvaluationThreshold();
            this.testingModeSetting = new TestingModeSetting();
        }
    }

    public class TotalUnitResult
    {
        public int numberOfTasks;
        
        public int numberOfMoving;
        public int numberOfPunching;
        public int numberOfReachNotStraight;
        public int numberOfStraightNotReach;

        public int numberOfReacting;
        public int numberOfMovingCorrectly;
        public int numberOfSuccess; // Reach + Arm Straight
        
        public int numberOfOverTime;
        public float totalReactionTime;
        public float averageReactionTime;
        public int totalScore;

        public List<UnitResult> unitResultList;

        public TotalUnitResult(int a = 0) {
            this.numberOfTasks = 0;
            
            this.numberOfMoving = 0;
            this.numberOfPunching = 0;
            this.numberOfReachNotStraight = 0;
            this.numberOfStraightNotReach = 0;

            this.numberOfReacting = 0;
            this.numberOfMovingCorrectly = 0;
            this.numberOfSuccess = 0;
            
            this.numberOfOverTime = 0;
            this.totalReactionTime = 0.0f;
            this.averageReactionTime = 0.0f;
            this.totalScore = 0;
            this.unitResultList = new List<UnitResult>();
        }

        public void addUnitResult(UnitResult unitResult) {
            UnitResult tmp = new UnitResult(unitResult.unitNum, unitResult.isMoving, unitResult.isPunching, unitResult.isReach, unitResult.isStraight, unitResult.isReacting, unitResult.isMovingCorrectly, unitResult.isSuccess, unitResult.isOverTime, unitResult.reactionTime, unitResult.score);
            this.unitResultList.Add(tmp);
        }

        public void reset() {
            this.numberOfTasks = 0;
            
            this.numberOfMoving = 0;
            this.numberOfPunching = 0;
            this.numberOfReachNotStraight = 0;
            this.numberOfStraightNotReach = 0;

            this.numberOfReacting = 0;
            this.numberOfMovingCorrectly = 0;
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
        public bool isPunching;
        public bool isReach;
        public bool isStraight;
        
        public bool isReacting;
        public bool isMovingCorrectly;
        public bool isSuccess;

        public bool isOverTime;
        public float reactionTime;
        public int score;
        
        public UnitResult() {
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
        }

        public UnitResult(int _unitNum, bool _isMoving, bool _isPunching, bool _isReach, bool _isStraight, bool _isReacting, bool _isMovingCorrectly, bool _isSuccess, bool _isOverTime, float _reactionTime, int _score) {
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
        }

        public void reset() {
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
        }
    }

    public class UnitResultComment {
        public int score;
        public List<string> comments;

        public UnitResultComment(int a = 0) {
            this.score = 0;
            this.comments = new List<string>();
        }
    }
    public class Timer {
        public bool timerOn;
        public float timeTarget; // in seconds // count-up: timeTarget = over-time
        public float timeLeft; // in seconds // count-up: timeLeft = 0.0
        public bool countDown;

        public Timer (bool _timerOn, bool _countDown, float _timeTarget, float _timeLeft) {
            this.timerOn = _timerOn;
            this.countDown = _countDown;
            this.timeTarget = _timeTarget;
            this.timeLeft = _timeLeft;
        }

        public void ResetTimer() {
            this.timerOn = false;
            if (this.countDown) {
                this.timeLeft = this.timeTarget;
            }
            else {
                this.timeLeft = 0.0f;
            }
        }

        public void StartTimer() {
            this.timerOn = true;
        }
    }

    public class PunchStraightUnit {
        public float handStraightAngleThreshold;
        public bool systemJudgeAsStraight;
        public bool coachJudgeAsStraight;
        public Hand hand;
        public ArmRotationAngle armRotationAngle;

        public PunchStraightUnit() {
            this.handStraightAngleThreshold = 0.0f;
            this.systemJudgeAsStraight = false;
            this.coachJudgeAsStraight = false;
            this.hand = new Hand();
            this.armRotationAngle = new ArmRotationAngle(0.0f, 0.0f, 0.0f);
        }
        public PunchStraightUnit(float _angleThreshold, bool _systemJudgeAsStraight, bool _coachJudgeAsStraight, Hand _hand, ArmRotationAngle _armRotationAngle) {
            this.handStraightAngleThreshold = _angleThreshold;
            this.systemJudgeAsStraight = _systemJudgeAsStraight;
            this.coachJudgeAsStraight = _coachJudgeAsStraight;
            this.hand = _hand;
            this.armRotationAngle = _armRotationAngle;
        }
    }
    public class PunchStraightUnitTest {
        public float userHeight;
        public float userArmLength;
        public UserArmStraightAngle userArmStraightAngle;
        public List<PunchStraightUnit> punchStraightUnitList;

        public PunchStraightUnitTest() {
            this.userHeight = 0.0f;
            this.userArmLength = 0.0f;
            this.userArmStraightAngle = new UserArmStraightAngle();
            this.punchStraightUnitList = new List<PunchStraightUnit>();
        }
        public void addUnitResult(PunchStraightUnit unit) {
            PunchStraightUnit tmp = new PunchStraightUnit(unit.handStraightAngleThreshold, unit.systemJudgeAsStraight, unit.coachJudgeAsStraight, unit.hand, unit.armRotationAngle);
            this.punchStraightUnitList.Add(tmp);
        }

        public void reset() {
            this.userHeight = 0.0f;
            this.userArmLength = 0.0f;
            this.punchStraightUnitList.Clear();
        }
    }
    // public class NamespaceDefine : MonoBehaviour
    // {
    //     // Start is called before the first frame update
    //     void Start()
    //     {
            
    //     }

    //     // Update is called once per frame
    //     void Update()
    //     {
            
    //     }
    // }

}
