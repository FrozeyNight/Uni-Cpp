#include <iostream>

int main(){

    size_t dlugoscTabeli = 0;
    std::cout << "Dlugosc tabeli: ";
    std::cin >> dlugoscTabeli;

    double array[dlugoscTabeli];
    // profesor tak woli robic arrays
    //double* array = new double[dlugoscTabeli];

    for (size_t i = 0; i < dlugoscTabeli; i++)
    {
        std::cout << i+1 << " liczba w tabeli: ";
        std::cin >> array[i];
    }

    double ostatniElement = array[dlugoscTabeli - 1];
    for (size_t i = dlugoscTabeli - 1; i > 0; i--)
    {
        array[i] = array[i - 1];
    }

    array[0] = ostatniElement;
     
    for (size_t i = 0; i < dlugoscTabeli; i++)
    {
        std::cout << array[i];
    }

    // jak robisz w taki sposob array to musisz ja usunac
    //delete [] array;

    return 0;
}