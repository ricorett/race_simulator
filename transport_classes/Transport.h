#pragma once
#include <cstring>
#include <iostream>

class Transport {
protected:
  int speed;
  std::string name, type;
  double final_time;

public:
    Transport(std::string n) : name(n) {}
   virtual ~Transport() {}
    std::string getType() const {
        return type;
    }

};

