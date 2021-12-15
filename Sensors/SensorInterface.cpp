//
// Created by Fiona Turner-Hehlen on 02.12.21.
//

#include "SensorInterface.h"

    /*
     * Constructor
     */
    SensorInterface::SensorInterface(){
            current_measurement = 0;
    }

    /*
     * Retrieve current control value
     */
    double SensorInterface::getCurrent_Measurement(){
        return current_measurement;
    }

    /*
     * Set current_measurement, only used in constructor and by the function measureValue().
     * For real-time measurements, the subtype-specific function measureValue() will be used.
     */
    void SensorInterface::setCurrent_Measurement(double val){
        current_measurement = val;
        std::cout << "Value set to " << val << std::endl;
    }

