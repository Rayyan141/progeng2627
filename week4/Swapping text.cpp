#include <iostream>

void swap( std::string&a, std::string&b){

    std::string temp;

    temp = a;
    a = b;
    b = temp;

}

int main(){

    std::string x,y;

    std::cout << "Enter 2 strings" << std::endl;
    std::cin >> x >> y;

    swap(x, y);

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y;
}