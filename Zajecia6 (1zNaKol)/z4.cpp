#include <iostream>

int main(){

    int R = 0;
    double S = 0;

    do{
        std::cout << "Podaj R: ";
        std::cin >> R;
        std::cout << "Podaj S: ";
        std::cin >> S;

    } while(R <= 1 || S <= 0);

    double suma = 1;
    if(suma >= S){
        std::cout << "liczb: 1" << " Wynik wiekszy o " << 1 - S;
    }
    suma += R - 1;
    if(suma >= S){
        std::cout << "liczb: 2" << " Wynik wiekszy o " << suma - S;
    }

    suma += R*(R + 1) - 2;
    if(suma >= S){
        std::cout << "liczb: 3" << " Wynik wiekszy o " << suma - S;
    }

    double poprzedniaLiczba = R*(R + 1);
    for (int i = 2;; i++)
    {
        poprzedniaLiczba = poprzedniaLiczba * (R+i);
        suma += poprzedniaLiczba - (i + 1);

        if(suma > S){
            std::cout << "liczb: " << i + 2 << ", " << "Wynik wiekszy o " << suma - S;
            break;
        }
        else if(suma == S){
            std::cout << "liczb: " << i + 2 << ", "<< "Wynik równny";
            break;
        }
    }
    
    return 0;
}