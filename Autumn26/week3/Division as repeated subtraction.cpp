#include <iostream>

int main(){

    double a, b, q = 0;

    std::cout << "Enter number 'a'" << std::endl;
    std::cin >> a;

    std::cout << "Enter another number 'b'" << std::endl;
    std::cin >> b;

    while ( a > b){

        std::cout << a << " is less than " << b << " so subtract " << b << std::endl;
        a = a - b;
        q = q + 1;
    }

    std::cout << "Quotient is " << q << std::endl;
    std::cout << "Remainder is " << a;
}