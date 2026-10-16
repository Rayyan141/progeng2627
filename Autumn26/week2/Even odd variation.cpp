#include <iostream>

int main(){

    int n, rem;
    
    std::cout << "Enter a number" << std::endl;
    std::cin >> n;

    rem = n % 2;

    bool  is_even;

    is_even = ( rem == 0 );
    // if rem = 0 then a boolean value ( of yes or no) is stored in is_even

    if ( is_even){

        std::cout << "Number is even";
    }

    else{

        std::cout << "number is odd";
    }
}