#include <iostream>
#include <cmath>

int main(){

    int x = 0;
    std::cout << "x: ";
    std::cin >> x;
    
    while(x > 9 || x < 1){
        std::cout << "Podaj liczbe mniejsza od 10";
        std::cout << "x: ";
        std::cin >> x;
    }

    int potega = x;
    int liczbaPotegi = 1;
    while(true){
        potega = pow(x, liczbaPotegi);
        if(potega >= 1000000 && liczbaPotegi % 2 == 0)
            break;
        liczbaPotegi++;
    }

    std::cout << "Najmniejsza potega parzysta " << x << " wieksza od miliona to " << liczbaPotegi;
    return 0;
}