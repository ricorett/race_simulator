#pragma once
#include "Air_transport.h"

class Eagle : public Air_transport {
  std::string name = "Орёл";
  int speed = 8;
  const int range_reduction = 6;
};
