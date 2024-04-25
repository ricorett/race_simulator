#pragma once
#include "Race.h"


class Mixed_race : public Race {
public:
    Mixed_race(int r) : Race(r){};
    void registerVehicle() override;
};
