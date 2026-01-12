#include <iostream>
#include <cmath>

int main(){
    int promien = 0;
    std::cout << "Promien: ";
    std::cin >> promien;
    bool isPolePowierzchni;
    std::cout << "Co chcesz obliczyc?\n";
    std::cout << "0. Objetosc Kuli\n";
    std::cout << "1. Pole Powierchni Kuli\n";
    std::cin >> isPolePowierzchni;

    if(promien > 0){
        if(isPolePowierzchni){
            std::cout << "Pole powierzchni: " << 4 * M_PI * pow(promien, 2);
    }
        else{
            std::cout << "Objetosc: " << 4/3.0 * M_PI * pow(promien, 3);
        }
    }
}