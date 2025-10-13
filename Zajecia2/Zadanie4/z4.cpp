#include <iostream>

int main(){

    int a,b,c = 0;
    double x = 0;

    std::cout << "Zmienna a: ";
    std::cin >> a;
    std::cout << "Zmienna b: ";
    std::cin >> b;
    std::cout << "Zmienna c: ";
    std::cin >> c;
    std::cout << "Zmienna x: ";
    std::cin >> x;

    std::cout << "Wartosc funkcji kwadratowej: " << a*(x*x) + b*x + c;

    return 0;
}