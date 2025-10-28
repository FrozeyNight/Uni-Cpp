#include <iostream>
#include <cmath>

int main(){

    int promien = 0;
    int wysokosc = 0;
    char decyzja = '\0';

    while(promien < 1 || wysokosc < 1){
        std::cout << "Wpisz promien: ";
        std::cin >> promien;
        std::cout << "Wpisz wysokosc: ";
        std::cin >> wysokosc;
        std::cout << "Oblicz objetosc: O lub Pole Powierzchni P: ";
        std::cin >> decyzja;
        if(promien < 1 || wysokosc < 1){
            std::cout << "Wpisz liczby nieujemne calkowite!\n";
        }
        else if(decyzja != 'O' && decyzja != 'P'){
            std::cout << "Wybierz albo objetosc albo pole powierzchni\n";
            promien = 0;
            wysokosc = 0;
        }
    }

    if(decyzja == 'O'){
        std::cout << M_PI * promien*promien * wysokosc;
    }
    else
        std::cout << 2 * M_PI * promien * wysokosc;


    return 0;
}