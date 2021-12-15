//
// Created by Fiona Turner-Hehlen on 09.12.21.
//

#ifndef APASON_APASONINTERFACE_H
#define APASON_APASONINTERFACE_H

#include <string>
using namespace std;

class ApasonInterface {

private:

public:
    bool active;
    string view;

    ApasonInterface();

    ApasonInterface(string view_type);
    virtual void start() = 0;
    bool isActive();
    void changeActive(bool change);

};


#endif //APASON_APASONINTERFACE_H
