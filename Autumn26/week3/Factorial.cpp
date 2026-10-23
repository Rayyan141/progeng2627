#include <iostream>

int main(){

    int x, n, product = 1;

    std::cout << "Enter number" << std::endl;
    std::cin >> n;

    x = n;

    for ( ; n != 0; n--){

        product = product * n;
        
    }

    std::cout << x << "! = " << product;
}

