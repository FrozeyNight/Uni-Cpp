#include <iostream>

int main(){

    double a = 0;
    double b = 0;

    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b; 
 
    if(a == 0){
        if(b == 0)
            std::cout << "Równanie ma nieskończenie wiele rozwiązań";
        else
            std::cout << "Równanie nie ma rozwiązań rzeczywistych";
    }
    else{
        std::cout << "Rozwiązaniem równania jest: " << -b / a;
    }
    
    return 0;
}