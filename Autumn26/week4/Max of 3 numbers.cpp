#include <iostream>

double max( double a, double b, double c){

    if ( a > b){

        if ( a > c){

            return a;

        }

        else{

            return c;
        }
    }

    else{

        if ( b > c){

            return b;

        }

        else{

            return c;
        }
    }
}

int main(){

    double a, b, c;

    std::cout << "Enter number 1" << std::endl;
    std::cin >> a;

    std::cout << "Enter number 2" << std::endl;
    std::cin >> b;

    std::cout << "Enter number 3" << std::endl;
    std::cin >> c;

    std::cout << "Largest number = " << max( a, b, c);


}