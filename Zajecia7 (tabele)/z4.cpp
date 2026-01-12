#include <iostream>

int main(){

    size_t dlugoscTabeli = 0;
    std::cout << "Dlugosc tabeli: ";
    std::cin >> dlugoscTabeli;

    double* array = new double[dlugoscTabeli];

    for (size_t i = 0; i < dlugoscTabeli; i++)
    {
        std::cout << i+1 << " liczba w tabeli: ";
        std::cin >> array[i];
    }

    bool rosnaco = true;
    bool malejaco = true;
    bool symetryczna = true;
    bool powtorzenie = false;

    for (size_t i = 0; i < dlugoscTabeli - 1; i++)
    {
        if(array[i] > array[i + 1])
            rosnaco = false;
        else if(array[i] < array[i + 1])
            malejaco = false;
        
    }
    if(dlugoscTabeli == 1){
        rosnaco = false;
        malejaco = false;
    }

    bool nieparzystaLiczbaElementow = dlugoscTabeli % 2 != 0;

    for (size_t i = 0; i < (dlugoscTabeli - nieparzystaLiczbaElementow) / 2 + 1; i++)
    {
        if(array[i] != array[dlugoscTabeli - 1 - i]){
            symetryczna = false;
            break;
        }
    }
    
    for (size_t i = 0; i < dlugoscTabeli; i++)
    {
        for (size_t j = 0; j < dlugoscTabeli; j++)
        {
            if(array[i] == array[j] && i != j){
                powtorzenie = true;
                break;
            }
        }
        if(powtorzenie)
            break;
    }
    
    if(rosnaco) std::cout << "Tablica jest rosnaca" << std::endl;
    else std::cout << "Tablica nie jest rosnaca" << std::endl;
    if(malejaco) std::cout << "Tablica jest malejaca" << std::endl;
    else std::cout << "Tablica nie jest malejaca" << std::endl;
    if(symetryczna) std::cout << "Tablica jest symetryczna" << std::endl;
    else std::cout << "Tablica nie jest symetryczna" << std::endl;
    if(powtorzenie) std::cout << "Tablica ma powtarzajace sie wartosci" << std::endl;
    else std::cout << "Tablica nie ma powtarzajacych sie wartosci" << std::endl;

    delete [] array;

    return 0;
}