#include <iostream>

int main(){
    
    int a = 0;
    int b = 0;
    int c = 0;

    std::cout << "Bok podstawy: ";
    std::cin >> a;
    std::cout << "Drugi bok podstawy: ";
    std::cin >> b;
    std::cout << "Wysokosc: ";
    std::cin >> c;

    int ab = a*b;
    int polePowierzchni = 2*ab;
    int objetosc = ab*c;
    int poleBoczne = 2*(a+b)*c;
    int polePowierzchniCalkowitej = 2*(ab+b*c+a*c);

    std::cout << "Pole powierzchni: " << polePowierzchni << "\n";
    std::cout << "Objetosc: " << objetosc << "\n";
    std::cout << "Pole boczne: " << poleBoczne << "\n";
    std::cout << "Pole powierzchni calkowitej: " << polePowierzchniCalkowitej << "\n";




    return 0;
}