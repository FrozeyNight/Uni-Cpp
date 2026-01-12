#include <iostream>

bool CzyDoskonala(int n);

int main(){
    
    int counter = 0;
    for (int i = 0; counter < 4; i++)
    {
        if(CzyDoskonala(i)){
            std::cout << i << std::endl;
            counter++;
        }
    }

    return 0;
}

bool CzyDoskonala(int n){
    if(n == 0) return false;
    int suma = 0;
    for (int i = 1; i <= n/2; i++)
    {
        if(n % i == 0){
            suma += i;
        }
    }

    return suma == n;
}