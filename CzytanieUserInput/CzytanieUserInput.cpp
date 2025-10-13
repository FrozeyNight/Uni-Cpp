#include <iostream>

int main(){

    int a = 0;

    std::cout << "Wprowadź długość boków: ";
    std::cin >> a;

    int obwod = a*4;
    int pole = a*a;

    std::cout << "Obwód kwadratu to " << obwod << "\n"; 
    std::cout << "Pole kwadratu to " << pole << "\n"; 


    return 0;
}