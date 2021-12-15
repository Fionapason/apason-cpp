//
// Created by Fiona Turner-Hehlen on 03.12.21.
//

#ifndef UNTITLED3_ELECTRONICVALVE_H
#define UNTITLED3_ELECTRONICVALVE_H

#include "SensorInterface.h"
#include <iostream>
using namespace std;

// There's some confusion with this class re:the need for a "measurement" value but perhaps
// separating the members and having a specific control_value to set is better

class ElectronicValve: public SensorInterface{

    /*
     * Electronic valve has a set value, mandated by the user
     */

    private:
        double control_value = 0;


    public:
        /*
         * Constructor of class
         */
        ElectronicValve();

        /*
         * Constructor of class with initial control value
         */


        explicit ElectronicValve(double init);

        // maybe the valve can't measure anything anyways and this code is useless
        double measureValue() override;

        /*
        * EV specific measurement function
        */
        void setControl_Value(double control);

        /*
        * getter function for EV specific control value
        */
        double getControl_Value();

};

#endif //UNTITLED3_ELECTRONICVALVE_H
