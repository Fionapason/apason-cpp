//
// Created by Fiona Turner-Hehlen on 03.12.21.
//

#ifndef UNTITLED3_MASSFLOW_H
#define UNTITLED3_MASSFLOW_H

#endif //UNTITLED3_MASSFLOW_H

#include "SensorInterface.h"

class MassFlow: public SensorInterface{
    //double control value;
    //functions to set the control value perhaps + communicate with control system

public:

    /*
     * Class constructor
     */
    MassFlow();

    /*
     * Class constructor with initial mass flow
     */
    explicit MassFlow(double init);

    /*
     * Retrieve measurement from massflow sensor
     * Calls setCurrent_Measurement
     */
    double measureValue() override;
};