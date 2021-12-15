//
// Created by Fiona Turner-Hehlen on 02.12.21.
//

#include "Pressure.h"

    /*
     * Class constructor
     */
    Pressure::Pressure(){
        this->setCurrent_Measurement(0); //default value 0. Probably needs to be changed!
    }

    /*
     * Class constructor with initial pressure
     */
    Pressure::Pressure(double init){
        this->setCurrent_Measurement(init); //will require communication with the control system
    }

    /*
     * Retrieves measurement from sensor
     */
    double Pressure::measureValue(){
        return this->getCurrent_Measurement(); //TO BE REPLACED WITH MEASUREMENT CODE
        //AT THE END MAKE SURE TO CALL setCurrent_Measurement() TO CHANGE THE VALUE IN OBJECT
        //Use pointers/references
    }

