#include <iostream>

int main(){

    int G = 0;
    std::cout << "Podaj G: ";
    std::cin >> G;


    int pierwszaLiczba = 0;
    std::cout << "Podaj liczbe: ";
    std::cin >> pierwszaLiczba;

    int drugaLiczba = 0;
    std::cout << "Podaj liczbe: ";
    std::cin >> drugaLiczba;

    if(pierwszaLiczba == 0 || drugaLiczba == 0)
        return 0;
    
    int trzeciaLiczba = 0;
    std::cout << "Podaj liczbe: ";
    std::cin >> trzeciaLiczba;
    
    int iloscPar = 0;

    while(trzeciaLiczba != 0){

        if(pierwszaLiczba >= drugaLiczba){
            if(drugaLiczba >= trzeciaLiczba){
                if((pierwszaLiczba + drugaLiczba) / 2.0 > G){
                    std::cout << pierwszaLiczba << "," << drugaLiczba << "," << trzeciaLiczba << std::endl;
                    iloscPar++;
                }
            }
            else{
                if((pierwszaLiczba + trzeciaLiczba) / 2.0 > G){
                    std::cout << pierwszaLiczba << "," << drugaLiczba << "," << trzeciaLiczba << std::endl;
                    iloscPar++;
                }
            }
        }
        else if(pierwszaLiczba >= trzeciaLiczba){
            if((pierwszaLiczba + drugaLiczba) / 2.0 > G){
                    std::cout << pierwszaLiczba << "," << drugaLiczba << "," << trzeciaLiczba << std::endl;
                    iloscPar++;
            }
        }
        else{
            if((trzeciaLiczba + drugaLiczba) / 2.0 > G){
                    std::cout << pierwszaLiczba << "," << drugaLiczba << "," << trzeciaLiczba << std::endl;
                    iloscPar++;
            }
        }

        pierwszaLiczba = drugaLiczba;
        drugaLiczba = trzeciaLiczba;

        std::cout << "Podaj liczbe: ";
        std::cin >> trzeciaLiczba;
    }

    std::cout << "Liczba par: " << iloscPar << std::endl;

    return 0;
}