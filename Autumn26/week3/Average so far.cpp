#include <iostream>

int main(){

    double x, sum = 0, n = 0;

    while ( x !=0 ){

        std::cout << "Average so far is " << sum / n << std::endl;
        n = n + 1;
        std::cin >> x;
        sum = sum + x;
        
    }

    std::cout << "Final average is " << sum;

}