#include <iostream>

int main(){
    int poprzedniaLiczba = 0;
    std::cout << "Podaj liczbe: ";
    std::cin >> poprzedniaLiczba;
    if(poprzedniaLiczba == 0)
        return 0;

    int currentLiczba = 0;
    std::cout << "Podaj liczbe: ";
    std::cin >> currentLiczba;
    int max = 0;
    if(currentLiczba > poprzedniaLiczba)
        max = currentLiczba;
    else
        max = poprzedniaLiczba;
    int iloscPar = 0;

    while(currentLiczba != 0){

        if(currentLiczba > max){
            max = currentLiczba;
        }

        if(poprzedniaLiczba + currentLiczba < max){
            std::cout << poprzedniaLiczba << "," << currentLiczba << std::endl;
            iloscPar++;
        }

        poprzedniaLiczba = currentLiczba;

        std::cout << "Podaj liczbe: ";
        std::cin >> currentLiczba;
    }

    std::cout << "Liczba par: " << iloscPar << std::endl;

    return 0;
}