#include <iostream>
#include <cmath>

int main (){

    int R = 0;
    std::cout << "R: ";
    std::cin >> R;

    double S = 0;
    std::cout << "S: ";
    std::cin >> S;

    int sum = 1;
    
    int counter = 1;
    while(sum < S || sum % 2 == 0){
        sum += pow(R, counter) - counter;
        counter++;
    }

    double roznica = sum - S;

    if(roznica == 0)
        std::cout << "liczb: " << counter << ", wynik rowny\n";
    else
        std::cout << "liczb: " << counter << ", " << "wynik wiekszy o " << roznica << std::endl;

    return 0;
}