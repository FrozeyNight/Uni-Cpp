#include <iostream>

int main(){

    double kwotaDlaReszty = 0;
    double kwotaDanaKasjerowi = 0;
    std::cout << "Kwota do zaplaty: ";
    std::cin >> kwotaDlaReszty;
    std::cout << "Kwota dana kasjerowi: ";
    std::cin >> kwotaDanaKasjerowi;

    int piecet = 0;
    int dwiescie = 0;
    int sto = 0;
    int piedziesiat = 0;
    int dwadziescia = 0;
    int dziesiec = 0;
    int piec = 0;
    int dwa = 0;
    int zlotowka = 0;
    int piedziesiatGroszy = 0;
    int dwadziesciaGroszy = 0;
    int dziesiecGroszy = 0;
    int piecGroszy = 0;
    int dwaGrosze = 0;
    int grosz = 0;

    double reszta = kwotaDanaKasjerowi - kwotaDlaReszty;

    while(reszta > 0){
        if(reszta - 500 >= 0){
            reszta -= 500;
            piecet++;
            continue;
        }
        else if(reszta - 200 >= 0){
            reszta -= 200;
            dwiescie++;
            continue;
        }
        else if(reszta - 100 >= 0){
            reszta -= 100;
            sto++;
            continue;
        }
        else if(reszta - 50 >= 0){
            reszta -= 50;
            piedziesiat++;
            continue;
        }
        else if(reszta - 20 >= 0){
            reszta -= 20;
            dwadziescia++;
            continue;
        }
        else if(reszta - 10 >= 0){
            reszta -= 10;
            dziesiec++;
            continue;
        }
        else if(reszta - 5 >= 0){
            reszta -= 5;
            piec++;
            continue;
        }
        else if(reszta - 2 >= 0){
            reszta -= 2;
            dwa++;
            continue;
        }
        else if(reszta - 1 >= 0){
            reszta -= 1;
            zlotowka++;
            continue;
        }
        else if(reszta - 0.5 >= 0){
            reszta -= 0.5;
            piedziesiatGroszy++;
            continue;
        }
        else if(reszta - 0.2 >= 0){
            reszta -= 0.2;
            dwadziesciaGroszy++;
            continue;
        }
        else if(reszta - 0.1 >= 0){
            reszta -= 0.1;
            dziesiecGroszy++;
            continue;
        }
        else if(reszta - 0.05 >= 0){
            reszta -= 0.05;
            piecGroszy++;
            continue;
        }
        else if(reszta - 0.02 >= 0){
            reszta -= 0.02;
            dwaGrosze++;
            continue;
        }
        else if(reszta - 0.01 >= 0){
            reszta -= 0.01;
            grosz++;
        }
    }

    std::cout << "500: " << piecet << '\n' << 
                 "200: " << dwiescie << '\n' << 
                 "100: " << sto << '\n' << 
                 "50: " << piedziesiat << '\n' << 
                 "20: " << dwadziescia << '\n' << 
                 "10: " << dziesiec << '\n' << 
                 "5: " << piec << '\n' << 
                 "2: " << dwa << '\n' << 
                 "1: " << zlotowka << '\n' << 
                 "50gr: " << piedziesiatGroszy << '\n' << 
                 "20gr: " << dwadziesciaGroszy << '\n' << 
                 "10gr: " << dziesiecGroszy << '\n' << 
                 "5gr: " << piecGroszy << '\n' << 
                 "2gr: " << dwaGrosze << '\n' << 
                 "1gr: " << grosz << '\n'; 


    return 0;
}