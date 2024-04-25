#pragma once
#include "Race.h"
class Air_race : public Race {
public:
    Air_race(int r) : Race(r) {};
    void registerVehicle() override;
};
