#include <iostream>
#include <cmath>

int main(){
    double a = 0;
    double b = 0;
    double c = 0;

    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;
    if(a > 0 && b > 0 && c > 0){
        if(a+b > c && b+c > a && c+a > b){
            double p = (a+b+c) / 2;
            std::cout << "Pole trójkąta: " << sqrt(p*(p-a)*(p-b)*(p-c));
        }
        else{
            std::cout << "Z podanych odcinkow nie mozna stworzyc trojkata";
        }
    }
    return 0;
}