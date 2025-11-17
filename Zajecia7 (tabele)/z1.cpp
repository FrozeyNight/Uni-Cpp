#include <iostream>

int main(){

    int array[5];

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << i +1 << " Liczba: ";
        std::cin >> array[i];   
    }

    size_t wielkoscTabeli = sizeof(array)/sizeof(int);

    std::cout << " ";
    for (size_t i = 0; i < wielkoscTabeli; i++)
    {
        std::cout << " " << array[i];
    }
    
    
    for (size_t i = 0; i < wielkoscTabeli; i++)
    {
        std::cout << std::endl << array[i] << " ";
        for (size_t j = 0; j < wielkoscTabeli; j++)
        {
            std::cout << array[i] * array[j] << " ";
        }
        
    }
    

    return 0;
}