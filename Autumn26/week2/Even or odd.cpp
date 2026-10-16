#include <iostream>

int main(){
    
    int n , rem;

    std::cout << "Please enter a number" << std::endl;
    std::cin >> n;

    rem = n % 2;

    if ( rem == 0){

        std::cout << "The nunmber is even";
    }

    else{

        std::cout << "The number is odd";
    }
}