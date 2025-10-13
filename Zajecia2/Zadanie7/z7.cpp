#include <iostream>
#include <iomanip>

int main(){

    double kwota = 0;
    std::cout << "Kwota w zlotowkach: ";
    std::cin >> kwota;

    std::cout << "Kwota w Dolarach: " << std::fixed << std::setprecision(2) << kwota * 0.27 << "\n";
    std::cout << "Kwota w Euro: " << std::fixed << std::setprecision(2) << kwota * 0.3 << "\n";
    std::cout << "Kwota w Frankach Szwajcarskich: " << std::fixed << std::setprecision(2) << kwota * 0.22 << "\n";

    return 0;
}