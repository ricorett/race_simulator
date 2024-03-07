#pragma once
#include <iostream>

enum transport_errors{
    OK
    IVALID_RANGE
    CALC_ERROR;
};

class Transport {
protected:
    int speed;
    std::string name, type;
    double final_time;
};


