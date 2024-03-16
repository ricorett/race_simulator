#include "transport_classes/Transport.h"
#include "race_classes/Default_race.h"
#include "main.h"
#include "race_classes/Air_race.h"
#include "race_classes/Ground_race.h"


int main(){
    int race_type = 0, range = 0;
    start_game(race_type, range);
    std::vector<int> table;
    return 0;
}

void start_game(int race_type, int range){
    std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
    std::cout << "1. Гонка для наземного транспорта" << std::endl;
    std::cout << "2. Гонка для воздушного транспорта транспорта" << std::endl;
    std::cout << "3. Гонка для наземного и воздушного транспорта" << std::endl;
    std::cout << "Выберите тип гонки: ";
    std::cin >> race_type;

    std::cout << "Введите расстояние гонки: ";
    std::cin >> range;
    try {
        switch (race_type) {
            case 1:
                Ground_race ground;
                ground.Ground_race_registration(); break;
            case 2:
                Air_race air;
                air.Air_race_registration();
                break;
            case 3:
                Default_race default_race;
                default_race.Default_race_registration();
                break;
            default: throw ERROR_TYPE;
        }
    }
    catch (...){
        std::cout << "Введен неверный тип гонки.";
    }
}


void race_table(std::vector<int> table){

}