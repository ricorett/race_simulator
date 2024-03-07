#pragma once
#include "Transport.h"

class Air_transport : public Transport{
protected:
    type = "Воздушный транспорт";
    int range_reduction;
    final_time = (range * (1.0 - range_reduction ) / speed);
};


