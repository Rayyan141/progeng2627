#include <iostream>

double max( double a, double b){

    if ( a > b){

        return a;

    }

    else{

        return b;
    }
}

int main(){

    double a, b;

    std::cout << "Enter 1st number" << std::endl;
    std::cin >> a;

    std::cout << "Enter 2nd number" << std::endl;
    std::cin >> b;

    std::cout << "The larger number is " << max( a, b);
}