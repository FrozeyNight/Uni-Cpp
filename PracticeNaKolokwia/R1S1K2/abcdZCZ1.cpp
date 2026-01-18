#include <iostream>

void Pobierz(int* tab, int dlugosc);
void Wypisz(int* tab, int dlugosc);
void ZmeinNaPrzeciwne(int* tab, int dlugosc);
int* NajdluzszaPodtablicaNiepodzielnych(int* tab, int N, int dlugosc, int *dlugoscWynikowejTablicy);

int main(){
    // 2,3,1,4,0,4,1,2,3,1,5,2 D:12
    int dlugosc = 0;
    std::cout << "Dlugosc: ";
    std::cin >> dlugosc;

    int* tab = new int[dlugosc];
    Pobierz(tab, dlugosc);
    Wypisz(tab, dlugosc);
    ZmeinNaPrzeciwne(tab, dlugosc);
    Wypisz(tab, dlugosc);
    int dlugosc2 = 0;
    int N = 0;
    std::cout << "N: ";
    std::cin >> N;
    int* tab2 = NajdluzszaPodtablicaNiepodzielnych(tab, N, dlugosc, &dlugosc2);
    Wypisz(tab2, dlugosc2);

    delete [] tab2;
    delete [] tab;
    return 0;
}

void Pobierz(int* tab, int dlugosc){
    for (int i = 0; i < dlugosc; i++)
    {
        std::cout << "Element " << i+1 << ": ";
        std::cin >> tab[i];
    }
}

void Wypisz(int* tab, int dlugosc){
    for (int i = 0; i < dlugosc; i++)
    {
        std::cout << tab[i];
        if(i + 1 != dlugosc){
            std::cout << ",";
        }
    }
    std::cout << std::endl;
}

void ZmeinNaPrzeciwne(int* tab, int dlugosc){
    if(dlugosc < 3) return;
    int najmniejszaSuma = 2140000000;
    int indexNajmniejszejSumy = 0;
    int suma = 0;
    for (int i = 0; i < dlugosc - 2; i++)
    {
        suma = tab[i] + tab[i+1] + tab[i+2];
        if(suma < najmniejszaSuma){
            najmniejszaSuma = suma;
            indexNajmniejszejSumy = i;
        }
    }
    
    tab[indexNajmniejszejSumy] = tab[indexNajmniejszejSumy] * -1;
    tab[indexNajmniejszejSumy + 1] = tab[indexNajmniejszejSumy + 1] * -1;
    tab[indexNajmniejszejSumy + 2] = tab[indexNajmniejszejSumy+ 2] * -1;
}

int* NajdluzszaPodtablicaNiepodzielnych(int* tab, int N, int dlugosc, int *dlugoscWynikowejTablicy){
    int maxDlugoscPodtablicy = 0;
    int maxIndex = 0;
    int dlugoscPodtablicy = 0;
    int index = 0;
    for (int i = 0; i < dlugosc; i++)
    {
        if(tab[i] % N != 0){
            dlugoscPodtablicy++;
            if(dlugoscPodtablicy == 1){
                index = i;
            }
        }
        else{
            if(dlugoscPodtablicy > maxDlugoscPodtablicy){
                maxDlugoscPodtablicy = dlugoscPodtablicy;
                maxIndex = index;
            }
            dlugoscPodtablicy = 0;
            index = 0;
        }
    }
    if(dlugoscPodtablicy > maxDlugoscPodtablicy){
        maxDlugoscPodtablicy = dlugoscPodtablicy;
        maxIndex = index;
    }
    
    *dlugoscWynikowejTablicy = maxDlugoscPodtablicy;
    int* wynik = new int[*dlugoscWynikowejTablicy];
    for (int i = 0; i < *dlugoscWynikowejTablicy; i++)
    {
        wynik[i] = tab[maxIndex + *dlugoscWynikowejTablicy - 1 - i];
    }

    return wynik;
}