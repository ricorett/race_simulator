#pragma once
#include "Race.h"
class Ground_race : public Race {
public:
    Ground_race(int r) : Race(r) {};
    void registerVehicle() override;
};
