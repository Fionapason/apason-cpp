//
// Created by Fiona Turner-Hehlen on 12.12.21.
//

#ifndef APASON_REALAPASON_H
#define APASON_REALAPASON_H
#include "ApasonInterface.h"

class RealApason: public ApasonInterface {
public:
    RealApason(string view_type);
    void start() override;

};


#endif //APASON_REALAPASON_H
