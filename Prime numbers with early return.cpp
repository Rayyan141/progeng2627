#include <iostream>

int smalles_factor( int n){

    for ( int i = 2; i < n; i ++ ){

        if ( n % i == 0){

            return i;
        }
        
    }

    return 0;
}

int main(){

    int n, factor;


    std::cout << "Enter number" << std::endl;
    std::cin >> n;

    factor = smalles_factor ( n );

    if ( factor != 0){

        std::cout << "Smallest prime factor of number = " << smalles_factor ( n );

    }

    else{

        std::cout << "Number is prime";
    }
}