#pragma once
#include "Air_transport.h"
class Broom : public Air_transport {
protected:
  name = "Метла";
  speed = 20;
  range_reduction = range % 1000;
};
