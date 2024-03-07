#pragma once
#include "Ground_transport.h"
class Centaur : public Ground_transport {
protected:
  name = "Кентавр";
  speed = 15;
  move_until_rest = 8;
  const int rest_time = 2;
};
