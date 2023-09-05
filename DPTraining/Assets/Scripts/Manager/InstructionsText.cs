using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace InstructionText 
{
    public enum Lanaguage {
        English,
        Chinese,
    }

    public class CalibrationInstruction {
        public MovableRangeInstruction movableRangeInstruction;
        public TPoseInstruction tPoseInstruction;
        // public ArmLengthInstruction straightArmInstruction;

        public CalibrationInstruction() {
            this.movableRangeInstruction = new MovableRangeInstruction();
            this.tPoseInstruction = new TPoseInstruction();
        }

    }

    public class MovableRangeInstruction {
        public List<string> title;
        public List<string> instruction;
        public List<string> resultTitle;
        public List<string> result;
        public List<string> resultDefault;

        public MovableRangeInstruction() {
            this.title = new List<string>();
            this.title.Add("Movable Range Calibration");
            this.title.Add("校正可移動範圍");

            this.instruction = new List<string>();
            this.instruction.Add("Please put your LEFT-controller on a floor around the movable place and press button 'A' on R-controller.");
            this.instruction.Add("請將左手控制器放在可移動範圍的角落，並按下右手控制器上的 'A' 按鈕。");

            this.resultTitle = new List<string>();
            this.resultTitle.Add("Movable Range Result");
            this.resultTitle.Add("可移動範圍結果");

            this.result = new List<string>();
            this.result.Add("Range Side Length (m) = ");
            this.result.Add("可移動範圍邊長 (公尺) = ");

            this.resultDefault = new List<string>();
            this.resultDefault.Add("Too short, use default length (m) = ");
            this.resultDefault.Add("太短了，使用預設長度 (公尺) = ");
        }
    }

    public class TPoseInstruction {
        public List<string> title;
        public List<string> instructionR;
        public List<string> instructionL;
        public List<string> resultTitle;
        public List<string> resultLengthR;
        public List<string> resultLength;
        public List<string> resultHeight;

        public TPoseInstruction() {
            this.title = new List<string>();
            this.title.Add("T-Pose Calibration");
            this.title.Add("校正 T-Pose");

            this.instructionR = new List<string>();
            this.instructionR.Add("Raise your RIGHT hand as T-Pose, move your head to look at your R-controller, and press button 'A' on R-controller.");
            this.instructionR.Add("將右手向右伸直(T-Pose)，並將頭部轉動看向右手控制器，並按下右手控制器上的 'A' 按鈕。");

            this.instructionL = new List<string>();
            this.instructionL.Add("Raise your LEFT hand as T-Pose, move your head to look at your L-controller, and press button 'A' on R-controller.");
            this.instructionL.Add("將左手向左伸直(T-Pose)，並將頭部轉動看向左手控制器，並按下右手控制器上的 'A' 按鈕。");

            this.resultTitle = new List<string>();
            this.resultTitle.Add("T-Pose Result");
            this.resultTitle.Add("T-Pose 結果");

            this.resultLengthR = new List<string>();
            this.resultLengthR.Add("Length of Center Eye to Right Hand (m) = ");
            this.resultLengthR.Add("頭部到右手的距離 (公尺) = ");

            this.resultLength = new List<string>();
            this.resultLength.Add("Average Length of Center Eye to Hand (m) = ");
            this.resultLength.Add("頭部到手的平均距離 (公尺) = ");

            this.resultHeight = new List<string>();
            this.resultHeight.Add("Height (m) = ");
            this.resultHeight.Add("身高 (公尺) = ");
        }
    }

    public class ArmLengthInstruction {
        public List<string> title;
        public List<string> instructionR;
        public List<string> instructionL;
        public List<string> resultLengthR;
        public List<string> resultLengthL;
        public List<string> resultLength;
        public List<string> resultShoulderWidth;
    }
}