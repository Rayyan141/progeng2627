#include <iostream>

int main(){

    int x, c1 = 0, c2 = 0;

    std::cout << "Enter a number" << std::endl;
    std::cin >> x;

    while ( c1 != x ){

        while ( c2 != x){

            std::cout << "*";
            c2 ++;
        }

        c2 = 0; // Forgot this line and program only outputs the 1st row. Important to remember to set c2 back to 0
        std::cout << std::endl;
        c1++;
        
    }

}