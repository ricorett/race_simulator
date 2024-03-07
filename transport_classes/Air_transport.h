#pragma once
#include "Transport.h"

class Air_transport : public Transport {
protected:
  int range_reduction;
  type = "Воздушный транспорт";
  final_time = (range * (1.0 - range_reduction) / speed);
};
