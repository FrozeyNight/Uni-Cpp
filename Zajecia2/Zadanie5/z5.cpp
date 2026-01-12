#include <iostream>

int main(){

    // wartosc slodzika / napoj - 0.12g
    // smiertelna dawka dla myszy - 1/190 wagi
    // 100kg * 1/190 = ~0.5263kg

    const int masaMyszy = 19;
    const double smiertelnyProcentSlodziku = 0.1;
    const double iloscSlodziku = 0.0001;
    const double iloscSlodzikuWJednymNapoju = 1.2 * iloscSlodziku;

    double smiertelnaDawka = 1/((double)masaMyszy / smiertelnyProcentSlodziku);

    double docelowaWaga = 0;
    std::cout << "Wpisz wage docelowa: ";
    std::cin >> docelowaWaga;

    double iloscSmiertelnegoSlodziku = docelowaWaga * smiertelnaDawka;

    std::cout << "Mozesz bezpiecznie wypic: " << (int)(((1000 * iloscSmiertelnegoSlodziku) / iloscSlodzikuWJednymNapoju) / 1000) << " napojow";
    


    return 0;
}