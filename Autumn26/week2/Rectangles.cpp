#include <iostream>

int main(){

    int l1, l2, perimeter, area;
    std::cout << "Enter 1st length of your rectangle" << std::endl;
    std::cin >> l1;

    std:: cout << "Enter 2nd length of your rectangle" << std::endl;
    std::cin >> l2;

    perimeter = l1 + l2;
    area = l1 * l2;

    std::cout << "The perimeter is " << perimeter << std::endl;
    std::cout << "The area is " << area;
}