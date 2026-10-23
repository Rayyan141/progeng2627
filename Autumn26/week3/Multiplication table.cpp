#include <iostream>

int main(){

    int x;

    std::cout << "Enter a number" << std::endl;
    std::cin >> x;

    for ( int c1= 1; c1 != x + 1; c1++){

        for ( int c2 = 1; c2 != x + 1; c2++){

            std::cout << c1 * c2 << "\t";
        }

        std::cout << std::endl;
    }
}