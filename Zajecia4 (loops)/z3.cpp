#include <iostream>

int main(){

    int G = 0;
    std::cout << "G: ";
    std::cin >> G;

    int x = 0;
    int y = 1;
    while(x < G){
        x += y;
        y++;
    }

    std::cout << y - 1;
    // 1 3 6 10 15 21 27 34
    return 0;
}