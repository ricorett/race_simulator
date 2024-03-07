#pragma once
#include <iostream>
#include <string>
#include <vector>
enum race_errors {
  OK
};

class Default_race {
protected:
  std::vector<std::string> race_table;

public:
  static std::string Default_race_registration();
};
