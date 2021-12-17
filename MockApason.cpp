//
// Created by Fiona Turner-Hehlen on 09.12.21.
//

#include "MockApason.h"

MockApason::MockApason(string view_type){
    active = true;
    view = view_type;
}

void MockApason::start() {


    cout << "Turn on? 1/0" << endl;

    // function to turn on SembrOWA.
    // function to check if SembrOWA is on.
    // Initializing all my control values (test_pressure, test_electronicValve, test_massFlow

    Pressure test_pressure;
    ElectronicValve test_electronicValve;
    MassFlow test_massFlow;


    // running system
    while (this->isActive()) {

        //basic menu
        cout << "\n" << endl;
        cout << "Would you like to check the Pressure," <<
             "the Massflow or change the diameter of the electronic valve?" << endl;
        cout << "1 for Pressure" << endl;
        cout << "2 for Massflow" << endl;
        cout << "3 for ElectronicValve" << endl;
        cout << "0 to quit SembrOWA" << endl;

        int answer;

        cin >> answer;

        switch (answer){

            case 1: pressure_checker(&test_pressure);
                break;
            case 2: massflow_checker(&test_massFlow);
                break;
            case 3: electronicvalve_setter(&test_electronicValve);
                break;
            case 0: cout << "Are you sure you want to quit? (1/0)" << endl;
                cin >> answer;
                this->changeActive(!answer);
                break;
            default:cout << "ERROR, please try again." << endl;
                break;

        }


    }

    cout << "Quitting SembrOWA..." << endl;

    //Code to shut down SembrOWA

    cout << "SembrOWA is shut down." << endl;


}

