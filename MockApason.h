//
// Created by Fiona Turner-Hehlen on 09.12.21.
//

#ifndef APASON_MOCKAPASON_H
#define APASON_MOCKAPASON_H

#include "ApasonInterface.h"
#include "Check_Sensor_Functions.h"
#include <iostream>
using namespace std;

class MockApason: public ApasonInterface {

public:
    void start() override;
    MockApason(string view_type);
};


#endif //APASON_MOCKAPASON_H
