#pragma once
#include "Ground_transport.h"
class Camel : public Ground_transport {
protected:
  std::string name = "Верблюд";
  int speed = 10;
  int move_until_rest = 30;
  int rest_time = 5;
  int second_time = 8;
};
