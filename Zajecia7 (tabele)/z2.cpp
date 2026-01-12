#include <iostream>

int main(){
    size_t dlugoscTabeli = 0;
    std::cout << "Dlugosc tabeli: ";
    std::cin >> dlugoscTabeli;

    int array[dlugoscTabeli];
    int curLiczba = 0;
    bool czyDodatnia = false;
    for (size_t i = 0; i < dlugoscTabeli; i++)
    {
        std::cout << i+1 << " liczba w tabeli: ";
        std::cin >> array[i];

        /*
        std::cin >> curLiczba;
        if(curLiczba > 0){
            czyDodatnia = true;
        }
        */
    }

    for (size_t i = 0; i < dlugoscTabeli; i++)
    {
        if(array[i] > 0)
            czyDodatnia = true;
    }

    if(czyDodatnia){
        std::cout << "W tablicy jest liczba dodatnia";
    }
    else{
        std::cout << "W tablicy nie ma liczby dodatniej";
    }

    return 0;
}