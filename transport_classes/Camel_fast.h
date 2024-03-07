#pragma once
#include "Ground_transport.h"
class Camel_fast : public Ground_transport {
protected:
  std::string name = "Верблюд-вездеход";
  int speed = 40;
  int move_until_rest = 10;
  int rest_time = 5;
  double second_time = 6.5;
  int third_time = 8;
};
