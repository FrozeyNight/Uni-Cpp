#include <iostream>
#include <iomanip>

int main(){

    double pensja = 0;
    const double podatek = 0.19;
    std::cout << "Wprowadz pensje: ";
    std::cin >> pensja;
    double pensjaZPodatkiem = pensja * podatek;
    std::cout << "Podatek pensji: " << std::fixed << std::setprecision(2) << pensjaZPodatkiem << "\n";
    std::cout << "Wyplata: " << std::fixed << std::setprecision(2) << pensja - pensjaZPodatkiem << "\n";

    return 0;
}