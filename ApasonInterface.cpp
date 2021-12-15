//
// Created by Fiona Turner-Hehlen on 09.12.21.
//

#include "ApasonInterface.h"
#include <iostream>

using namespace std;
ApasonInterface::ApasonInterface() {
    active = true;
    view = "console";
}

ApasonInterface::ApasonInterface(string view_type) {
    active = true;
    view = view_type;
}

void ApasonInterface::changeActive(bool change) {
    active = change;
}

bool ApasonInterface::isActive(){
    return active;
}

bool function (){
   cout << "Does it make sense to use this keyboard without a mouse & monitor? \n";
   cout << "Well... Not really \n";

}