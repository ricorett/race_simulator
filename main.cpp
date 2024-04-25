#include "main.h"
#include "transport_classes/Transport.h"
#include "race_classes/Mixed_race.h"
#include "race_classes/Air_race.h"
#include "race_classes/Ground_race.h"


int main(){
    int race_type = 0, range = 0;
    start_game(race_type, range);
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
        Mixed_race mixed_race(range);
        Air_race air_race(range);
        Ground_race ground_race(range);
        if (race_type == 1) {
            ground_race.registerVehicles();
            ground_race.startRace();
            ground_race.printResults();
        } else if (race_type == 2) {
            air_race.registerVehicles();
            air_race.startRace();
            air_race.printResults();
        } else if (race_type == 3) {
            mixed_race.registerVehicles();
            mixed_race.startRace();
            mixed_race.printResults();
        } else {
            throw "Некорректный выбор типа гонки.";
        }
    }
    catch (const char* error_message){
        std::cout << error_message << std::endl;
    }

}

