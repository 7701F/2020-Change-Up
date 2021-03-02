/**
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/

#include "main.h"

// Driving Motors
pros::Motor leftMtr(1, MOTOR_GEARSET_18, false, MOTOR_ENCODER_DEGREES);
pros::Motor rightMtr(2, MOTOR_GEARSET_18, true, MOTOR_ENCODER_DEGREES);

// Intake Motors
// Left Intake
pros::Motor intake_mtr(6, MOTOR_GEARSET_18, false, MOTOR_ENCODER_DEGREES);
// Right Intake
pros::Motor intake1_mtr(7, MOTOR_GEARSET_18, false, MOTOR_ENCODER_DEGREES);
// Front Elevator
pros::Motor elevator_mtr(9, MOTOR_GEARSET_06, false, MOTOR_ENCODER_DEGREES);
// Rear Elevator
pros::Motor elevator1_mtr(10, MOTOR_GEARSET_06, false, MOTOR_ENCODER_DEGREES);

