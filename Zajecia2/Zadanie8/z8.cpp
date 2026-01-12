#include <iostream>

int main(){

    double szerokoscPokoju,dlugoscPokoju,wysokoscPokoju = 0;
    int liczbaDrzwi, liczbaOkien = 0;
    double wysokoscDrzwi, szerokoscDrzwi, wysokoscOkien, szerokoscOkien = 0;

    std::cout << "Szerokosc pokoju: ";
    std::cin >> szerokoscPokoju;
    std::cout << "Dlugosc pokoju: ";
    std::cin >> dlugoscPokoju;
    std::cout << "Wysokosc pokoju: ";
    std::cin >> wysokoscPokoju;
    std::cout << "Liczba okien: ";
    std::cin >> liczbaOkien;
    std::cout << "Szerokosc okien: ";
    std::cin >> szerokoscOkien;
    std::cout << "Wysokosc okien: ";
    std::cin >> wysokoscOkien;
    std::cout << "Liczba drzwi: ";
    std::cin >> liczbaDrzwi;
    std::cout << "Szerokosc drzwi: ";
    std::cin >> szerokoscDrzwi;
    std::cout << "Wysokosc drzwi: ";
    std::cin >> wysokoscDrzwi;

    double polePowierzchniCalkowitejPokoju = 2 * szerokoscPokoju * dlugoscPokoju + 2 * szerokoscPokoju * wysokoscPokoju + 2 * dlugoscPokoju * wysokoscPokoju;
    double polePowierzchniCalkowitejOkien = liczbaOkien * szerokoscOkien * wysokoscOkien;
    double polePowierzchniCalkowitejDrzwi = liczbaDrzwi * szerokoscDrzwi * wysokoscDrzwi;

    double powierzchniaDoPomalowania = polePowierzchniCalkowitejPokoju - polePowierzchniCalkowitejOkien - polePowierzchniCalkowitejDrzwi;

    std::cout << "Potrzeba kupić " << (int)(powierzchniaDoPomalowania / 5) + 1 << " litrów farby";

    return 0;
}