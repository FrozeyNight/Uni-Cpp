#include <iostream>

int main(){

    char wybor = '\0';

    for(int i = 0; wybor != 's' && wybor != 'w';i++){
        std::cin >> wybor;
    }

    std::cout << wybor;

    return 0;
}