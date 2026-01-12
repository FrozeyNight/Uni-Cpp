#include <iostream>
#include <tuple>

void PobTab(int tab[], int len);
void WypTab(int tab[], int len);
void ZmienNaNieparzysteTab(int tab[], int len);
bool CzyRosnaca(int tab[], int len);
bool CzySymetryczna(int tab[], int len);
bool CzyZawieraPowtorzenia(int tab[], int len);
void ZamienPonizejNaSrednia(int tab[], int len);
//std::tuple<int*, int> TablicaMniejszych(int tab[], int len, int liczba);
int* TablicaMniejszych(int tab[], int len, int liczba, int &dlugoscTab2);

int main(){

    int dlugosc = 5;
    int *tab = new int[dlugosc];

    PobTab(tab, dlugosc);
    //ZmienNaNieparzysteTab(tab, dlugosc);
    //ZamienPonizejNaSrednia(tab, dlugosc);
    WypTab(tab, dlugosc);
    std::cout << CzyRosnaca(tab, dlugosc) << std::endl;
    std::cout << CzySymetryczna(tab, dlugosc) << std::endl;
    std::cout << CzyZawieraPowtorzenia(tab, dlugosc) << std::endl;

    //auto [tab2, dlugoscTab2] = TablicaMniejszych(tab, dlugosc, 3); 
    int dlugoscTab2 = 0;
    int* tab2 = TablicaMniejszych(tab, dlugosc, 3, dlugoscTab2);

    WypTab(tab2, dlugoscTab2);
    
    delete [] tab;
    delete [] tab2;
    
    return 0;
}

void PobTab(int tab[], int len){
    for (size_t i = 0; i < len; i++)
    {
        std::cout << "Podaj element " << i + 1 << ": ";
        std::cin >> tab[i];
    }
}

void WypTab(int tab[], int len){
    for (size_t i = 0; i < len; i++)
    {
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;
}

void ZmienNaNieparzysteTab(int tab[], int len){
    for (size_t i = 0; i < len; i++)
    {
        if(tab[i] % 2 != 0){
            tab[i] = 0;
        }
    }
}

bool CzyRosnaca(int tab[], int len){
    bool rosnaca = true;
    for (size_t i = 0; i < len - 1; i++)
    {
        if(tab[i] >= tab[i + 1]){
            rosnaca = false;
            break;
        }
    }

    return rosnaca;
}

bool CzySymetryczna(int tab[], int len){
    bool symetryczna = true;
    for (size_t i = 0; i < len / 2; i++)
    {
        if(tab[i] != tab[len - i - 1]){
            symetryczna = false;
            break;
        }
    }

    return symetryczna;
}

bool CzyZawieraPowtorzenia(int tab[], int len){
    for (size_t i = 0; i < len; i++)
    {
        for (size_t j = 0; j < len; j++)
        {
            if(j != i){
                if(tab[i] == tab[j]){
                    return true;
                }
            }
        }
        
    }

    return false;
}

void ZamienPonizejNaSrednia(int tab[], int len){
   int suma = 0; 

    for (size_t i = 0; i < len; i++)
    {
        suma += tab[i];
    }
    
    int srednia = suma/len;

    for (size_t i = 0; i < len / 2; i++)
    {
        if(tab[i] < srednia){
            tab[i] = srednia;
        }
    }

}
/*
std::tuple<int*, int> TablicaMniejszych(int tab[], int len, int liczba){
    
    int liczbyDoUsuniecia = 0;

    for (size_t i = 0; i < len; i++)
    {
        if(tab[i] >= liczba){
            liczbyDoUsuniecia++;
        }
    }
    
    int dlugoscTab2 = len - liczbyDoUsuniecia;
    int *tab2 = new int[dlugoscTab2];


    int tab2Index = 0;
    for (size_t i = 0; i < len; i++)
    {
        if(tab[i] < liczba){
            tab2[tab2Index] = tab[i];
            tab2Index++;
        }
    }
    
    return {tab2, dlugoscTab2};
}
*/
int* TablicaMniejszych(int tab[], int len, int liczba, int &dlugoscTab2){
    
    int liczbyDoUsuniecia = 0;

    for (size_t i = 0; i < len; i++)
    {
        if(tab[i] >= liczba){
            liczbyDoUsuniecia++;
        }
    }
    
    dlugoscTab2 = len - liczbyDoUsuniecia;
    int *tab2 = new int[dlugoscTab2];


    int tab2Index = 0;
    for (size_t i = 0; i < len; i++)
    {
        if(tab[i] < liczba){
            tab2[tab2Index] = tab[i];
            tab2Index++;
        }
    }
    
    return tab2;
}