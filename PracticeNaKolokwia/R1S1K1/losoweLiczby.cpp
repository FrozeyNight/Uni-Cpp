#include <iostream>

int main(){

    srand(time(NULL));

    int poprawneNumery[6];
    bool rozne = false;
    while(!rozne){
        for(int i = 0; i < 6; i++){
            poprawneNumery[i] = (rand() % 49) + 1;
            std::cout << poprawneNumery[i] << std::endl;
        }
        rozne = true;
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                if(j != i){
                    if(poprawneNumery[i] == poprawneNumery[j]){
                        rozne = false;
                        std::cout << "SAME\n";
                    }
                }
                if(!rozne)
                    break;
            }
        }
    }
    int userNumery[6];
    for (int i = 0; i < 6; i++)
    {
        std::cout << "Podaj numer " << i + 1 << ": ";
        std::cin >> userNumery[i];
    }
    
    int iloscPoprawnych = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if(poprawneNumery[i] == userNumery[j])
                iloscPoprawnych++;
        }
        
    }
    
    std::cout << "Podales " << iloscPoprawnych << " poprawnych numerow\n";

    return 0;
}