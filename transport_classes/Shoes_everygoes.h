#pragma once

#include "Ground_transport.h"

class Shoes_everygoes : public Ground_transport {
protected:
  name = "Ботинки-скороходы";
  speed = 6;
  move_until_rest = 60;
  rest_time = 10;
  second_time = 5;
};
