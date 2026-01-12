#include <iostream>

void PobTab(int tab[], int len);
void WypTab(int tab[], int len);
void MnozOdbite(int tab[], int len);
bool CzyNaprzemienna(int tab[], int len);
void ZamienNaPodzielnik(int* liczba);
void ZamienDodatnie(int tab[], int len);
int* ParyParzyste(int tab[], int len, int* tab2Len);
int* UsunKrotkiePodtabliceUjemnych(int tab[], int N, int len, int* tab2Len);

int main(){

    std::cout << "len: ";
    int len = 11;
    //std::cin >> len;
    //int* tab = new int[len];
    int tab[] = {-1, 2, -4, -4, -3, 4, -2, 1, -1, -1, 0};
    //PobTab(tab, len);
    //MnozOdbite(tab, len);
    //std::cout << CzyNaprzemienna(tab, len) << std::endl;
    //int liczba = 37;
    //ZamienNaPodzielnik(&liczba);
    //std::cout << liczba << std::endl;
    //ZamienDodatnie(tab, len);
    int len2 = 0;
    //int* tab2 = ParyParzyste(tab, len, &len2);
    int* tab2 = UsunKrotkiePodtabliceUjemnych(tab, 2, len, &len2);
    WypTab(tab2, len2);

    //delete [] tab;
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

void MnozOdbite(int tab[], int len){
    for (size_t i = 0; i < len / 2; i++)
    {
        int iloczynLiczbSymetrycznych = tab[i] * tab[len - i - 1];
        tab[i] = iloczynLiczbSymetrycznych;
        tab[len - i - 1] = iloczynLiczbSymetrycznych;
    }

}

bool CzyNaprzemienna(int tab[], int len){
    if(len < 2) return false;

    bool dodatnie = tab[0] > 0;
    for (size_t i = 1; i < len; i++)
    {
        if(dodatnie && tab[i] >= 0 || !dodatnie && tab[i] <= 0){
            return false;
        }
        dodatnie = tab[i] > 0;
    }

    return true;
}

void ZamienNaPodzielnik(int* liczba){
    if(*liczba == 1) return;
    for (size_t i = 2; i < *liczba/2; i++)
    {
        if(*liczba % i == 0){
            *liczba = i;
        }
    }
    
}

void ZamienDodatnie(int tab[], int len){
    for (size_t i = 0; i < len; i++)
    {
        ZamienNaPodzielnik(&tab[i]);
    }
}

int* ParyParzyste(int tab[], int len, int* tab2Len){
    int len2 = 0;
    for (size_t i = 0; i < len; i++)
    {
        for (size_t j = i; j < len; j++)
        {
            if(i != j){
                if(tab[i] % 2 == 0 && tab[j] % 2 == 0){
                    len2 += 2;
                }
            }
        }
        
    }

    *tab2Len = len2;
    int* tab2 = new int[len2];
    
    int tab2Index = 0;
    for (size_t i = 0; i < len; i++)
    {
        for (size_t j = i; j < len; j++)
        {
            if(i != j){
                if(tab[i] % 2 == 0 && tab[j] % 2 == 0){
                    tab2[tab2Index] = tab[i];
                    tab2[tab2Index+1] = tab[j];
                    tab2Index += 2;
                }
            }
        }
        
    }

    return tab2;
}

int* UsunKrotkiePodtabliceUjemnych(int tab[], int N, int len, int* tab2Len){
    // NIE DZIAŁA
    
    int len2 = len;
    for (size_t i = 0; i < len; i++)
    {
        if(tab[i] < 0){
            for (size_t j = i; j <= len; j++)
            {
                if(tab[j] > 0){
                    if(j <= i + N + 1)
                        len2 -= (j - i - 1);
                    i += (j - i - 1);
                    break;
                }
            }
        }
    }

    *tab2Len = len2;
    int* tab2 = new int[len2];
    
    int tab2Index = 0;
    for (size_t i = 0; i < len; i++)
    {
        if(tab[i] < 0){
            for (size_t j = i; j <= i + N; j++)
            {
                if(tab[j] > 0){
                    len2 -= (j - i - 1);
                    i += (j - i - 1);
                    break;
                }
            }
        }
        tab2[tab2Index] = tab[i];
        tab2Index++;
    }

    return tab2;
}