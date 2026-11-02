#include <iostream>

void ap( double a, double b, double& area, double& per){

    area = a * b;
    per = 2 * a + 2 * b;

}

int main(){

    double l1, l2, area, per;

    std::cout << "Enter lengths" << std::endl;
    std::cin >> l1 >> l2;

    ap( l1, l2, area, per);

    std::cout << "Area = " << area <<std::endl;
    std::cout << "Perimeter = " << per;

}