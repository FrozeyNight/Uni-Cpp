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

    if(a == 0){
        if(b == 0){
            if(c == 0)
                std::cout << "Równanie ma nieskończenie wiele rozwiązań";
            else
                std::cout << "Równanie nie ma rozwiązań rzeczywistych";
        }
        else{
            std::cout << "Rozwiązaniem równania jest: " << -b / a;
        }
    }
    else{
        double delta = b*b - 4*a*c;
        if(delta == 0){
            std::cout << "Podwójnym rozwiązaniem równania jest: " << -b/2*a;
        }
        else if(delta < 0)
            std::cout << "Równanie nie ma rozwiązań rzeczywistych";
        else{
            double pierwiastekDelty = sqrt(delta);
            std::cout << "Rozwiązaniami równania są x1:" << (-b - pierwiastekDelty) / 2*a << " x2: " << (-b + pierwiastekDelty) / 2*a;
        }
    }

    return 0;
}