//
// Created by Fiona Turner-Hehlen on 02.12.21.
//

#include "MassFlow.h"

    /*
     * Class constructor
     */
    MassFlow::MassFlow(){
        this->setCurrent_Measurement(0);
    }

    /*
    * Class constructor with initial mass flow
    */
    MassFlow::MassFlow(double init){
        this->setCurrent_Measurement(init);
    }

    /*
    * Retrieve measurement from massflow sensor
    * Calls setCurrent_Measurement
    */
    double MassFlow::measureValue(){
        return this->getCurrent_Measurement(); //to be replaced with code communicating with pressure sensor
    }
