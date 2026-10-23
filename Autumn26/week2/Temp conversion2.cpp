#include <iostream>
#include <string>

int main(){

    double temp1, temp2;
    std::string unit1, unit2;

    std::cin >> temp1 >> unit1;

    bool valid_inp = true;

    if ( unit1 == "c" || unit1 == "C"){

        temp2 = temp1 *  9 / 5  + 32;
        unit2 = "f";

    }

    else if ( unit1 == "f" || unit1 == "F"){

        temp2 = (temp1-32) * 5 / 9;
        unit2 = "c";
    }

    else{

        valid_inp = false;
    }

    if ( valid_inp == true){

        std::cout << temp2 << unit2;

    }
    
    else{

        std::cout << "Invalid unit";
    }
}