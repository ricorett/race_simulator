#pragma once
#include "Transport.h"

class Air_transport : public Transport {
protected:
  int range_reduction;
  std::string type = "Воздушный транспорт";
  double final_time = (range * (1.0 - range_reduction) / speed);
};
