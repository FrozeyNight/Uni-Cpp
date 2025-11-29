#include <iostream>

int main (){

    int N = 0;
    int G = 0;
    std::cout << "N: ";
    std::cin >> N;

    int tab[N];
    for (int i = 0; i < N; i++)
    {
        std::cout << "Liczba " << i+1 << ": ";
        std::cin >> tab[i];
    }

    for (int i = 0; i < N; i++)
    {
        std::cout << tab[i] << " ";
    }
    
    std::cout << std::endl;

    std::cout << "G: ";
    std::cin >> G;
    

    for (int i = 0; i < N/2; i++)
    {
        if(tab[i] * tab[N - i - 1] > G){
            std::cout << tab[i] << " " << tab[N - i - 1] << std::endl;
        }
    }
    
    return 0;
}