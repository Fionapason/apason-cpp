//
// Created by Fiona Turner-Hehlen on 03.12.21.
//

#ifndef UNTITLED3_CHECK_SENSOR_FUNCTIONS_H
#define UNTITLED3_CHECK_SENSOR_FUNCTIONS_H

#include "Sensors/ElectronicValve.h"
#include "Sensors/Pressure.h"
#include "Sensors/MassFlow.h"

// User interaction functions to call on all the class member functions
// When the user wishes to see or change the control values

/*
 * Asks user if they want to see the current pressure, shows it if yes, exits otherwise.
 */

void pressure_checker(Pressure *current);

/*
 * Asks user if they want to the current massflow, shows it if yes, exits otherwise
 */


void massflow_checker(MassFlow *current);

/*
 * Informs user of current valve diameter, asks them if they want to change it, changes.
 */

void electronicvalve_setter(ElectronicValve *current);

#endif //UNTITLED3_CHECK_SENSOR_FUNCTIONS_H
