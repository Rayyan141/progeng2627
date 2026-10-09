#include <iostream>

int main(){

    int n, rem;

    std::cout << "Please enter a number" << std::endl;
    std::cin >> n;
    
    rem = n % 2;

    std::cout << "If output = 0, number is even. Else number is odd" << std::endl;
    std::cout << rem;
}