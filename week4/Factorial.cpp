#include <iostream>

int myfactorial(int in){

    int fact = 1;

    for ( ; in > 0; in--){

        fact = fact * in;

    }

    return fact;

}

int main(){

    int n; 
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n);
}