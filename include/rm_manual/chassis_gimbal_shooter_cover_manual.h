//
// Created by chenzheng on 7/20/21.
//

#ifndef RM_MANUAL_CHASSIS_GIMBAL_SHOOTER_COVER_MANUAL_H_
#define RM_MANUAL_CHASSIS_GIMBAL_SHOOTER_COVER_MANUAL_H_
#include "rm_manual/chassis_gimbal_shooter_manual.h"

namespace rm_manual {
class ChassisGimbalShooterCoverManual : public ChassisGimbalShooterManual {
 public:
  explicit ChassisGimbalShooterCoverManual(ros::NodeHandle &nh);
  void run() override;
 protected:
  void checkKeyboard() override;
  void sendCommand(const ros::Time &time) override;
  void shooterOutputOn() override;
  void rightSwitchDown() override;
  void rightSwitchMid() override;
  void rightSwitchUp() override;
  void mouseRightPress() override;
  void mouseRightRelease() override;
  void ctrlZPress();
  void drawUi(const ros::Time &time) override;
  rm_common::JointPositionBinaryCommandSender *cover_command_sender_{};
  rm_common::CalibrationQueue *cover_calibration_;
  InputEvent ctrl_z_event_;
};
}

#endif //RM_MANUAL_CHASSIS_GIMBAL_SHOOTER_COVER_MANUAL_H_
