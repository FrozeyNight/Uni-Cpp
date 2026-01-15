#include <iostream>

void Pobierz(int* tab, int dlugosc);
void Wypisz(int* tab, int dlugosc);
int* NajdluzszaPodtablicaWiekszychPodwojona(int* tab, int G, int dlugoscTab, int *dlugoscTabWynikowej);
bool CzySymetrycznaParzystosc(int* tab, int dlugosc);

int main(){

    int dlugosc = 0;
    std::cout << "Dlugosc Poczatkowej tabeli: ";
    std::cin >> dlugosc;

    int* tab = new int[dlugosc];
    Pobierz(tab, dlugosc);
    Wypisz(tab, dlugosc);

    std::cout << "CzySymetrycznaParzystosc: " << CzySymetrycznaParzystosc(tab, dlugosc) << std::endl;

    int dlugoscTabWynikowej = 0;
    int G = 0;
    std::cout << "G: ";
    std::cin >> G;
    int* tab4 = NajdluzszaPodtablicaWiekszychPodwojona(tab, G, dlugosc, &dlugoscTabWynikowej);
    Wypisz(tab4, dlugoscTabWynikowej);

    delete [] tab4;
    delete [] tab;

    return 0;
}

void Pobierz(int* tab, int dlugosc){
    for (size_t i = 0; i < dlugosc; i++)
    {
        std::cout << "Element " << i+1 << ": ";
        std::cin >> tab[i]; 
    }
}

void Wypisz(int* tab, int dlugosc){
    for (size_t i = 0; i < dlugosc; i++)
    {
        if(i+1 != dlugosc){
           std::cout << tab[i] << ","; 
        }
        else{
            std::cout << tab[i] << std::endl;
        }
    }
}

bool CzySymetrycznaParzystosc(int* tab, int dlugosc){
    bool wynik = true;

    for (size_t i = 0; i < dlugosc/2; i++)
    {
        if(tab[i] % 2 != tab[dlugosc - i - 1] % 2){
            wynik = false;
        }
    }
    
    return wynik;
}

int* NajdluzszaPodtablicaWiekszychPodwojona(int* tab, int G, int dlugoscTab, int *dlugoscTabWynikowej){
    
    int maxIndex = -1;
    int maxDlugosc = 0;
    int index = 0;
    int dlugosc = 0;

    for (size_t i = 0; i < dlugoscTab; i++)
    {
        if(tab[i] > G){
            if(index == 0){
                index = i;
            }
            dlugosc++;
        }
        else{
            if(index > maxIndex){
                maxIndex = index;
                index = 0;
                maxDlugosc = dlugosc;
                dlugosc = 0;
            }
        }
    }
    if(index > maxIndex){
        maxIndex = index;
        maxDlugosc = dlugosc;
    }
    
    *dlugoscTabWynikowej = maxDlugosc*2;
    int* tabWynik = new int[maxDlugosc*2];

    for (size_t i = 1; i < 3; i++)
    {
        for (size_t j = maxDlugosc*(i-1); j < maxDlugosc*i; j++)
        {
            tabWynik[j] = tab[maxIndex + j - (maxDlugosc*(i-1))];
        }
        
    }
    
    return tabWynik;
}