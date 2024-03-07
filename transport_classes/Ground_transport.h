#pragma once
#include "Transport.h"

class Ground_transport : public Transport {
protected:
  double time_calc();

  int rest_time = 0, move_until_rest = 0, all_rest = 0, final_time = 0,
      third_time = 0, rest_count = 0;
  double second_time = 0;
  type = "Наземный транспорт";
  rest_count = range / move_until_rest;
  final_time = (range / speed) + time_calc();
};

//    final_time = (range/speed) + all_rest;
