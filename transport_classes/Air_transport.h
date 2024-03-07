#pragma once
#include "Transport.h"

class Air_transport : public Transport{
protected:
    type = "воздушный";
    int range_reduction;
    virtual int range_check();
    final_time = (range * (1.0 - range_reduction ) / speed);
};


