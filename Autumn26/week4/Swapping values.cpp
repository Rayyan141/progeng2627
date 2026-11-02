#include <iostream>

int main(){

    int n1, n2;

    std::cout << "Please enter two values" << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "You entered:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    int tmp;

    tmp = n1;
    n1 = n2;
    n2 = tmp;

    std::cout << "After swapping the values:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2;

}