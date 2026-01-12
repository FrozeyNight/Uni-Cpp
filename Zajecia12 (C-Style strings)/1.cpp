#include <iostream>
#include <cstring>

int ileRazy(char znak, char* napis);
bool czyPolindrom(char* napis);
char NajczesciejWystepujacy(char* napis);
void NaWielkie(char* napis);
char* Skroc(char* napis, int *dlugosc);
int OdKtoregoIndeksu(char* napis, char* napis2);

int main(){


    char* napis;
    std::cout << "Napis: ";
    std::cin >> napis;
    //std::cout << ileRazy('a', napis) << std::endl;
    //std::cout << czyPolindrom(napis) << std::endl;
    //std::cout << NajczesciejWystepujacy(napis) << std::endl;

    /*
    NaWielkie(napis);
    for (size_t i = 0; i < std::strlen(napis); i++)
    {
        std::cout << napis[i];
    }

    */
   /*
    int dlugoscNowegoNapisu = std::strlen(napis);
    char* skroconyNapis = Skroc(napis, &dlugoscNowegoNapisu);
    for (size_t i = 0; i < dlugoscNowegoNapisu; i++)
    {
        std::cout << skroconyNapis[i];
    }

    std::cout << std::endl;
    */

    char* napis2;
    std::cout << "Napis2: ";
    std::cin >> napis2;

    std::cout << OdKtoregoIndeksu(napis, napis2);

    //delete [] napis;
    //delete [] skroconyNapis;
 
    return 0;
}

int ileRazy(char znak, char* napis){
    
    int licznik = 0;
    
    for (size_t i = 0; i < std::strlen(napis); i++)
    {
        if(napis[i] == znak){
            licznik++;
        }
    }
    
    return licznik;
}

bool czyPolindrom(char* napis){
    size_t dlugoscNapisu = std::strlen(napis);

    bool polindrom = true;
    for (size_t i = 0; i < dlugoscNapisu / 2; i++)
    {
        if(std::tolower(napis[i]) != std::tolower(napis[dlugoscNapisu - i - 1])){
            polindrom = false;
        }
    }

    return polindrom;
}

char NajczesciejWystepujacy(char* napis){
    char najczestszy = '\0';
    int maxCzestoscZnaku = 0;
    int currentCzestosc;

    for (size_t i = 0; i < std::strlen(napis); i++)
    {
        currentCzestosc = 0;
        for (size_t j = 0; j < std::strlen(napis); j++)
        {
            if(std::tolower(napis[i]) == std::tolower(napis[j])){
                currentCzestosc++;
            }
            if(currentCzestosc > maxCzestoscZnaku){
                maxCzestoscZnaku = currentCzestosc;
                najczestszy = std::tolower(napis[i]);
            }
        }
        
    }

    return najczestszy;
}

void NaWielkie(char* napis){
    for (size_t i = 0; i < std::strlen(napis); i++)
    {
        napis[i] = std::toupper(napis[i]);
    }
    
}

char* Skroc(char* napis, int *dlugosc){
    char poprzedniZank = '\0';
    char* nowyNapis = new char[*dlugosc];

    int indexNowegoNapisu = 0;
    for (size_t i = 0; i < std::strlen(napis); i++)
    {
        if(napis[i] != poprzedniZank){
            nowyNapis[indexNowegoNapisu] = napis[i];
            indexNowegoNapisu++;
            poprzedniZank = napis[i];
        }
    }

    nowyNapis[indexNowegoNapisu] = '\0';
    
    *dlugosc = std::strlen(nowyNapis);
    return nowyNapis;
}

/*
char* DiabelskaFunkcja(char* napis, int N, int *dlugosc){
    char* wynik = new char[*dlugosc];

    return "rough";
}
*/
int OdKtoregoIndeksu(char* napis, char* napis2){
    
    bool tuZaczyna;
    for (size_t i = 0; i < std::strlen(napis); i++)
    {
        tuZaczyna = true;
        for (size_t j = 0; j < std::strlen(napis2); j++)
        {
            if(napis[i + j] != napis2[j]){
                tuZaczyna = false;
                break;
            }
        }
        
        if(tuZaczyna){
            return i;
        }
    }
    return -1;
}