#pragma once

class Ground_transport : public Transport{
protected:
    int rest_time, move_until_rest, all_rest, final_time, third_time, rest_count;
    double second_time;
    type = "Наземный";
    int rest_count = range / move_until_rest;
private:
    double time_calc();
};


