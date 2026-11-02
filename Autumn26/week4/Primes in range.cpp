#include <iostream>

int smallest_factor( int n){

    for ( int i = 2; i < n; i ++ ){

        if ( n % i == 0){

            return i;
        }
        
    }

    return 0;

}

void scan( int n1, int n2){

    for ( ; n2 <= n1; n2 ++ ){

        if ( smallest_factor ( n2) == 0){

            std::cout << n2 << std::endl;
        }
        
    }
}

int main(){

    int a, b;

    std::cout << "Enter 2 numbers. Larger number 1st" << std::endl;
    std::cin >> a >> b;

    std::cout << std::endl << b << "    " << a << std::endl <<std::endl;
    scan( a, b);
}