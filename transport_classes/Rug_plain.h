#pragma once
#include "Air_transport.h"

class Rug_plain : public Air_transport {
protected:
  int check_range();

  int speed = 10;
  int range_reduction = check_range();
};
