#pragma once
#include "Transport.h"

class Ground_transport : public Transport {
protected:
  double time_calc();

  int rest_time = 0, move_until_rest = 0, all_rest = 0,
      third_time = 0;
  double second_time = 0;
  std::string type = "Наземный транспорт";
  double rest_count = (double )range / move_until_rest;
  double final_time = ((double )range / speed) + time_calc();
};

//    final_time = (range/speed) + all_rest;
