#include <iostream>
#include <cstring>

int main(){

    char test = '\0';
    std::cin >> test;
    std::cout << (char)((int)test + 25);

    char* test2 = "fdsfdfsg";
    std::cout << strlen(test2);

    return 0;
}