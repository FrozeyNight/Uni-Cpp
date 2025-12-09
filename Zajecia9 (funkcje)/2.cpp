#include <iostream>
#include <cmath>

bool czyPierwsza(int a, int b, int c);

int main(){

    int input = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    while(true){
        std::cout << "liczba: ";
        std::cin >> input;
        if(input == 0)
            break;
        a = b;
        b = c;
        c = input;

        if(a != 0){
            if(czyPierwsza(a, b, c)){
                std::cout << a << ", " << b << ", " << c << std::endl;
            }
        }
    }

    return 0;
}

bool czyPierwsza(int a, int b, int c){
    int max = std::max(a, b);
    max = std::max(max, c);

    bool sito[max + 1];
    std::fill_n(sito, max + 1, true);
    
    sito[0] = false;
    sito[1] = false;

    for (int i = 2; i*i < max + 1; i++)
    {
        if(sito[i]){
            for (int j = i + i; j < max + 1; j+=j)
            {
                sito[j] = false;
            }
            
        }
    }

    return sito[a] || sito[b] || sito[c];
}