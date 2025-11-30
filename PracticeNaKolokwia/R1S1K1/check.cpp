#include <iostream>

int main(){

    char test = '\0';
    std::cin >> test;
    std::cout << (char)((int)test + 25);

    return 0;
}