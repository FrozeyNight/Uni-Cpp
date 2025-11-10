#include <iostream>

int main(){

    int pierwszeZebraneZoledzie = 0;
    int liczbaDni = 0;

    std::cout << "L: ";
    std::cin >> pierwszeZebraneZoledzie;
    if(pierwszeZebraneZoledzie % 2 != 0){
        std::cout << "L musi byc parzyste" << std::endl;
        return 0;
    }
    std::cout << "N: ";
    std::cin >> liczbaDni;
    
    int sumaZoledzi = 0;
    int ktoryDzien = 0;
    for (size_t i = 0; i < liczbaDni; i++)
    {
        ktoryDzien++;
        if(ktoryDzien == 3){
            sumaZoledzi += (pierwszeZebraneZoledzie - i * 2) / 2;
            ktoryDzien = 0;
        }
        else{            sumaZoledzi += pierwszeZebraneZoledzie - i * 2;
        }
    }
    
    std::cout << "Suma zoledzi: " << sumaZoledzi << std::endl;

    return 0;
}