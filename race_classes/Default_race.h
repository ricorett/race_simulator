#pragma once

enum race_errors{
    OK


};

class Default_race {
protected:
    std::vector<std::string> race_table;
    int range;
public:
    std::string Default_race_registration();
};
