#include <iostream>

int main(){

    int s = 0;
    double t = 0;
    std::cout << "Wprowadz trase w km: ";
    std::cin >> s;
    std::cout << "Wprowadz czas przebycia w minutach: ";
    std::cin >> t;

    std::cout << "Srednia predkosc w km/h: " << s/(t/60);

    return 0;
}