#pragma once
#include "Ground_transport.h"

class Shoes_everygoes : public Ground_transport {
protected:
  std::string name = "Ботинки-скороходы";
  int speed = 6;
  int move_until_rest = 60;
  int rest_time = 10;
  int second_time = 5;
};
