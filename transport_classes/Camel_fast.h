#pragma once
#include "Ground_transport.h"
class Camel_fast : public Ground_transport {
protected:
  name = "Верблюд-вездеход";
  speed = 40;
  move_until_rest = 10;
  rest_time = 5;
  second_time = 6.5;
  third_time = 8;
};
