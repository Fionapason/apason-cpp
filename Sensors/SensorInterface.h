//
// Created by Fiona Turner-Hehlen on 03.12.21.
//

#ifndef UNTITLED3_SENSORINTERFACE_H
#define UNTITLED3_SENSORINTERFACE_H

#include <iostream>

class SensorInterface {

    private:
        double current_measurement;

    public:
        /*
         * Class constructor
         */
        SensorInterface();

        /*
        * Retrieve current control value
        */
        double getCurrent_Measurement();

        /*
         * Set current_measurement, only used in constructor and by the function measureValue().
         * For real-time measurements, the subtype-specific function measureValue() will be used.
         */
        void setCurrent_Measurement(double val);

        /*
        * Get new measurement of control value from sensor
        */
        virtual double measureValue() = 0;
};


#endif //UNTITLED3_SENSORINTERFACE_H
