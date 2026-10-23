#include <iostream>
#include <string>

int main(){

    double temp1, temp2;
    std::string unit1, unit2;

    std::cin >> temp1 >> unit1;

    if ( unit1 == "c"){

        temp2 = temp1 *  9 / 5  + 32;
        unit2 = "f";

    }

    else{

        temp2 = (temp1-32) * 5 / 9;
        unit2 = "c";
    }

    std::cout << temp2 << unit2;
}