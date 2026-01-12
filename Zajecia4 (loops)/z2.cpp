#include <iostream>

int main(){

    int a = 0;
    int b = 0;

    std::cout << "Wpisz a: ";
    std::cin >> a;
    std::cout << "Wpisz b: ";
    std::cin >> b;

    int sumaLiczbPodzielnychPrzez3 = 0;
    int iloscLiczbPodzielnychPrzez3 = 0;

    size_t i = b;
    while(i >= a){
        if(i % 3 == 0){
            std::cout << i << '\n';
            iloscLiczbPodzielnychPrzez3++;
            sumaLiczbPodzielnychPrzez3 += i;
        }
        i--;
    }

    std::cout << "suma liczb podzielnych przez 3: " << sumaLiczbPodzielnychPrzez3 << '\n';
    std::cout << "ilosc liczb podzielnych przez 3: " << iloscLiczbPodzielnychPrzez3 << '\n';
    return 0;
}