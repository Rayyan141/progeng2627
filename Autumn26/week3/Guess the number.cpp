#include <iostream>
#include <string>

int main(){

    int upper_bound, lower_bound, guess;
    std::string answer, hol;
    bool guessed = false;

    std::cout << "Enter lower bound" << std::endl;
    std::cin >> lower_bound;

    std::cout << "Enter upper bound" << std::endl;
    std::cin >> upper_bound;

    std::cout << "Think of a number between these bounds" << std::endl;

    while ( guessed == false){

        guess = ( upper_bound - lower_bound) / 2 + lower_bound;
        std::cout << "Is your number " << guess << "?" << std::endl;
        std::cout << "Yes (y) / No (n)" << std::endl;
        std::cin >> answer;

        if ( answer == "y"){
            guessed = true;
        }

        else{

            std::cout << "Higher (h) or lower (l)?" << std::endl;
            std::cin >> hol;

            if (hol == "h"){

                lower_bound = guess;
            }

            else{

                upper_bound = guess;
            }
        }

    }

    std::cout << "Number is " << guess;


}