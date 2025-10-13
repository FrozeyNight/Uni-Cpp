#include <iostream>

int main(){

    double temperatura = 0;

    std::cout << "Temperatura w stopniach Celsjusza: ";
    std::cin >> temperatura;

    std::cout << "Temperatura w Farenheit'ach: " << (temperatura * 9/5.0) + 32 << "\n";
    std::cout << "Temperatura w Kelvin'ach: " << temperatura + 273.15;

    return 0;
}