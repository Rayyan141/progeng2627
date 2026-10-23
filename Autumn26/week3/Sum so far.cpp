#include <iostream>

int main(){

    double x, sum = 0;

    while ( x !=0 ){

        std::cout << "Sum so far is " << sum << std::endl;
        std::cin >> x;
        sum = sum + x;
        
    }

    std::cout << "Final sum is " << sum;

}