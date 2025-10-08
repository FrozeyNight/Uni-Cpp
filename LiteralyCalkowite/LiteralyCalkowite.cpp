#include <iostream>
#include <limits>

int main(){

    int check = 012; // system ósemkowy
    std::cout << 0B1010 << "\n"; // system dwójkowy (zaczynasz od 0B i dalej jest liczba)

    int check2 = 0x1a; // zaczynasz od 0x
    std::cout << check2 << "\n"; // system szesnastkowy

    int check3 = 0B1111;

    // w taki sposób można sprawdzić jaki zakres mają liczby (tylko trzeba dodać #include <limits>)
    std::cout << "zakres int: od " << std::numeric_limits<int>::min() << " do " << std::numeric_limits<int>::max() << "\n";
    std::cout << "w bitach " << sizeof(int);

    return 0;
}