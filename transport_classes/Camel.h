#pragma once
#include "Ground_transport.h"
class Camel : public Ground_transport {
protected:
  name = "Верблюд";
  speed = 10;
  move_until_rest = 30;
  rest_time = 5;
  second_time = 8;
};
