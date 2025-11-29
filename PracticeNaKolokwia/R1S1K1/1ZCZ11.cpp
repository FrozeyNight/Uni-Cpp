#include <iostream>

int main (){

    int N = 0;
    int G = 0;
    std::cout << "N: ";
    std::cin >> N;
    std::cout << "G: ";
    std::cin >> G;

    int populacja = N;
    int tydzien = 0;
    int zPrzedTyg = 0;
    int holder = 0;
    while(populacja < G){
        holder = 0;
        if(tydzien > 0){
            holder = zPrzedTyg;
            zPrzedTyg = populacja;
            populacja += holder / 2;
            
        }
        else{
            zPrzedTyg = populacja;
            populacja += populacja/2;

        }
        tydzien++;
    }

    std::cout << "tygodni: " << tydzien << ", ";
    std::cout << "populacja: " << populacja << std::endl;

    return 0;
}