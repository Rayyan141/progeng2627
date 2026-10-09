#include <iostream>
int main(){
    
    double a, b, c;

    a = 1;
    b = 2;
    c = a + b;

    std::cout << c << std::endl;

    a = 2;

    std::cout << c << std::endl;

    c = a + b;

    std:: cout << c;
}

// expected to print 3, then 3 still as c hasn't been redefined with the new value of a and then to print 4 as c has now been redefined with the new value of a