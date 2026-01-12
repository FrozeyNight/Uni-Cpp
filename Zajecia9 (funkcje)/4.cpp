#include <iostream>

int NWW(int a, int b);

int main(){
    // NIE DZIALA

    int input = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    std::cout << "Aby wyjsc wpisz 0\n";
    while(true){
        std::cout << "liczba: ";
        std::cin >> input;
        if(input == 0)
            break;
        a = b;
        b = input;

        if(a > 0 && b > 0){
            std::cout << a << " " << b << " " << NWW(a, b) << std::endl;
        }
    }

    return 0;
}

int NWW(int a, int b){
    int iloczyn = a*b;
    while (a != b)
    {
        if(a >= b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    
    return iloczyn/(a+b);
}