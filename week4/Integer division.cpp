#include <iostream>

void int_div( int a, int b, int& div, int& rem){

    div = a / b;

    rem = a % b;

}

int main(){

    int a, b, div, rem;

    std::cout << "Enter 2 numbers" << std::endl;
    std::cin >> a >> b;

    int_div( a, b, div, rem);

    std::cout << "Quotient = " << div << std::endl;
    std::cout << "Remainder = " << rem;

}