#include <iostream>

double mypow(double base,int exp){
    
    double result = 1;
    
    if ( exp >= 0 ){
        
        for( int i = 0; i < exp; i++){

        }

    }

    else{

        exp = -exp;
        for( int i = 0; i < exp; i++){

            result = result / base;

        }

    }

    return result;

}

int main(){

    double base;
    int exp;

    std::cout << "Enter base" << std::endl;
    std::cin >> base;

    std::cout << "Enter exponent" << std::endl;
    std::cin >> exp;

    std::cout << mypow( base, exp );
}