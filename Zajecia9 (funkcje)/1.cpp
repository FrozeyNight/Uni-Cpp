#include <iostream>
#include <cmath>

bool Czy_Trojkat(int a, int b, int c);
double Obw_Trojkata(int a, int b, int c);
double Pole_Trojkata(int a, int b, int c);

int main(){

    int input = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    while(true){
        std::cout << "bok: ";
        std::cin >> input;
        if(input == 0)
            break;
        a = b;
        b = c;
        c = input;

        if(a != 0){
            if(Czy_Trojkat(a, b, c)){
                std::cout << "Pole Trojkata: " << Pole_Trojkata(a,b,c) << std::endl;
                std::cout << "Obwod Trojkata: " << Obw_Trojkata(a,b,c) << std::endl;
            }
            else{
                std::cout << "Z podanych odcinkow nie mozna stworzyc trojkata";
            }
        }
        else{
            std::cout << "Jeszcze nie ma 3 liczb";
        }
    }

    return 0;
}

bool Czy_Trojkat(int a, int b, int c){
    if(a > 0 && b > 0 && c > 0){
        return a+b > c && b+c > a && c+a > b;
    }
    return false;
}

double Obw_Trojkata(int a, int b, int c){
    return a+b+c;
}

double Pole_Trojkata(int a, int b, int c){
    double p = (a+b+c) / 2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}