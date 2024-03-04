#include "transport_classes/Transport.h"

int main(){
 std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
 std::cout << "1. Гонка для наземного транспорта" << std::endl;
 std::cout << "2. Гонка для воздушного транспорта транспорта" << std::endl;
 std::cout << "3. Гонка для наземного и воздушного транспорта" << std::endl;
 std::cout << "Выберите тип гонки: ";
 int race_type = 0;
 std::cin >> race_type;
    try {
        switch (race_type) {
            case 1:
                Ground_race_registrarion();
                break;
            case 2:
                Air_race_registration();
                break;
            case 3:
                Default_race_registration();
                break;
            default: throw ERROR_TYPE;
        }
    }
    catch (...){
        std::cout << "Введен неверный тип гонки.";
    }
    return 0;
}