#pragma once
#include "Ground_transport.h"
class Centaur : public Ground_transport {
protected:
 std::string name = "Кентавр";
 int  speed = 15;
 int  move_until_rest = 8;
 const int rest_time = 2;
};
