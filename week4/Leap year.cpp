#include <iostream>

bool leap_year(int year){

    bool ly = false;

    if ( year % 4 == 0){

        if ( year % 100 == 0){

            if ( year % 400 == 0 ){

                ly = true;

            }
        }
    }

    return ly;
}

int main(){

    int input_year;

    std::cout << "please enter a year" << std::endl;
    std::cin >> input_year;

    if ( leap_year( input_year) == true){

        std::cout << "Year is a leap year";

    }

    else{

        std::cout << "Year is not a leap year" << std::endl;
    }

    std::cout << (leap_year(1600) == true) << std::endl;
    std::cout << (leap_year(2000) == true) << std::endl;
    std::cout << (leap_year(1700) == false) << std::endl;
    std::cout << (leap_year(1900) == false) << std::endl;
    std::cout << (leap_year(2100) == false) << std::endl;
    std::cout << (leap_year(2200) == false) << std::endl;
    std::cout << (leap_year(2300) == false) << std::endl;
    std::cout << (leap_year(2500) == false) << std::endl;
    std::cout << (leap_year(2600) == false) << std::endl;
    std::cout << (leap_year(2700) == false) << std::endl;
    std::cout << (leap_year(2900) == false) << std::endl;
    std::cout << (leap_year(3000) == false) << std::endl;
}