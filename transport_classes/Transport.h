#pragma once
#include <cstring>
#include <iostream>

class Transport {
protected:
  int speed, range;
  std::string name, type;
  double final_time;
public:
    void set_range(int range){
        if (range > 0)
            *this = range;
    }
};
