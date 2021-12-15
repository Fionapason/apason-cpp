//
// Created by Fiona Turner-Hehlen on 03.12.21.
//

#ifndef UNTITLED3_PRESSURE_H
#define UNTITLED3_PRESSURE_H

#include "SensorInterface.h"

class Pressure: public SensorInterface{

    //double control value;
    //functions to set the control value perhaps + communicate with control system

public:
    /*
     * Class constructor
     */
    Pressure();

    /*
     * Class constructor with an initial value
     */
    explicit Pressure(double init);

    /*
     * Retrieve value from pressure sensor
     */
    virtual double measureValue() override;
};

#endif //UNTITLED3_PRESSURE_H
