#pragma once
#include <cstring>
#include <iostream>

class Transport {
protected:
  int speed, r_range;
  std::string name, type;
  double final_time;

public:
    Transport(std::string n) : name(n) {}
   virtual ~Transport() {}
    std::string getType() const {
        return type;
    }
    void setRange(int range)  {
        if (range > 0){
            r_range = range;
        }
    }
};

