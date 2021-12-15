//
// Created by Fiona Turner-Hehlen on 02.12.21.
//
#include "Check_Sensor_Functions.h"

// User interaction functions to call on all the class member functions
// When the user wishes to see or change the control values

/*
 * Asks user if they want to see the current pressure, shows it if yes, exits otherwise.
 */

void pressure_checker(Pressure *current){

    cout << "Would you like to see the current pressure? 1/0" << endl;

    int answer;
    cin >> answer;

    if (answer){
        cout << "The Pressure is " << current->measureValue() << " bar." << endl;
        return;
    }

    cout << "Exit Pressure" << endl;
}

/*it
 * Asks user if they want to the current massflow, shows it if yes, exits otherwise
 */

void massflow_checker(MassFlow *current){

    cout << "Would you like to see the current massflow? 1/0" << endl;

    int answer;
    cin >> answer;

    if (answer){
        cout << "The massflow is " << current->measureValue() << " kg/s." << endl;
        return;
    }

    cout << "Exit Massflow" << endl;
}

/*
 * Informs user of current valve diameter, asks them if they want to change it, changes.
 */

void electronicvalve_setter(ElectronicValve *current){

    cout << "The valve is currently at " << current->getControl_Value() << " cm." << endl;
    cout << "Would you like to change it? 1/0" << endl;

    int answer;
    cin >> answer;

    if (answer){
        cout << "What new diameter do you want [cm]?" << endl;
        double diameter;
        cin >> diameter;
        current->setControl_Value(diameter);
        cout << "The diameter has now been set to " << diameter << "cm." << endl;
        return;
    }

    cout << "Exit ElectronicValve" << endl;
}