//#######################################################################################################
// Name:             jupiter_config.h
// Purpose:          Main configuration header file for Jupiter Robot
// Description:      ESP32 pins and Robot properties can be user defined here 
// Related Files:         
// Author:           logan naidoo, south africa, 2024
//########################################################################################################

// Motor Pins
#define MOTOR1_PWM  32
#define MOTOR1_DIR  33
#define MOTOR1_ENC_B  25
#define MOTOR1_ENC_A  26

#define MOTOR2_PWM  23 //19
#define MOTOR2_DIR  19 //23
#define MOTOR2_ENC_A  18
#define MOTOR2_ENC_B  5

#define MOTOR3_PWM  27
#define MOTOR3_DIR  14
#define MOTOR3_ENC_B  12
#define MOTOR3_ENC_A  13

#define MOTOR4_PWM  17 //16
#define MOTOR4_DIR  16 //17
#define MOTOR4_ENC_A  4
#define MOTOR4_ENC_B  15 

// Define Onboard LED
#define ESP32_LED 2


// FROM LINO FOR PID
#define K_P 0.4 //0.15                       // P constant
#define K_I 0.8 //0.4                      // I constant
#define K_D 0.0 //0.0                      // D constant


// FROM LINO FOR KINEMATICS
#define LINO_BASE MECANUM                   // Mecanum drive robot
#define MOTOR_MAX_RPM 330                   // motor's max RPM          
#define MAX_RPM_RATIO 0.65                  // max RPM allowed for each MAX_RPM_ALLOWED = MOTOR_MAX_RPM * MAX_RPM_RATIO          
#define MOTOR_OPERATING_VOLTAGE 12          // motor's operating voltage (used to calculate max RPM)
#define MOTOR_POWER_MAX_VOLTAGE 12          // max voltage of the motor's power source (used to calculate max RPM)
#define MOTOR_POWER_MEASURED_VOLTAGE 12     // current voltage reading of the power connected to the motor (used for calibration)
#define COUNTS_PER_REV1 1320                // wheel1 encoder's no of ticks per rev
#define COUNTS_PER_REV2 1320                // wheel2 encoder's no of ticks per rev
#define COUNTS_PER_REV3 1320                // wheel3 encoder's no of ticks per rev
#define COUNTS_PER_REV4 1320                // wheel4 encoder's no of ticks per rev
#define WHEEL_DIAMETER 0.090                // wheel's diameter in meters
#define LR_WHEELS_DISTANCE 0.400            // distance between left and right wheels
#define PWM_BITS 8                          // PWM Resolution of the microcontroller
#define PWM_FREQUENCY 5000                 // PWM Frequency
#define PWM_MAX pow(2, PWM_BITS) - 1
#define PWM_MIN -PWM_MAX
#define USE_PID true
#define WHEEL_RADIUS 0.045
#define WHEEL_SEPARATION 0.400
#define PWM_FWD_MIN 25  // these two PWM_FWD & PWM_REV are needed to balance the startup power needed for each direction (helps even the turning spot)
#define PWM_REV_MIN 75  // was 130