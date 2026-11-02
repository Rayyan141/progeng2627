#include <iostream>
#include <cmath>

double sop( double x, int n){

    double sum = 0;

    for( int i = 1; i <= n; i++ ){

        sum = sum + std::pow(x, i);
    }
    return sum;
}

int main(){
    
    double x;
    int n;

    std::cout << "Enter base" << std::endl;
    std::cin >> x;

    std::cout << "Enter largest power" << std::endl;
    std::cin >> n;
    std::cout << sop( x, n );

}