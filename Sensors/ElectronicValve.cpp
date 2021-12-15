//
// Created by Fiona Turner-Hehlen on 02.12.21.
//

#include "ElectronicValve.h"
using namespace std;

// There's some confusion with this class re:the need for a "measurement" value but perhaps
// separating the members and having a specific control_value to set is better

/*
 * constructor
 */
ElectronicValve::ElectronicValve(){
    this->setCurrent_Measurement(control_value);
}


/*
 * class constructor initializing the measurement value
 */
ElectronicValve::ElectronicValve(double init){
    this->setCurrent_Measurement(init);
}

/*
 * EV specific measurement function
 */

// maybe the valve can't measure anything anyways and this code is useless
double ElectronicValve::measureValue(){
    // to be replaced with code communicating with valve sensor
    return this->getCurrent_Measurement();
}

/*
 * setter function for EV specific control value
 */

void ElectronicValve::setControl_Value(double control){
    control_value = control;
}

/*
 * getter function for EV specific control value
 */

double ElectronicValve::getControl_Value(){
    return this->control_value;
}

