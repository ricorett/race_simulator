#pragma once
#include <iostream>
#include <algorithm>
#include <string>

enum race_errors {
    OK
};

class Race {
public:
    virtual void registerVehicle() = 0;
    void startRace();
    void printResults();
    Race(int r){};
};


