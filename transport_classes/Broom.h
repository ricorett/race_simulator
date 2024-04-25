#pragma once
#include "Air_transport.h"
class Broom : public Air_transport {
protected:

  std::string name = "Метла";
  int speed = 20;
  int range_reduction = range % 1000;
public:
    Broom(std::string n) : Transport("Метла") {}
};
