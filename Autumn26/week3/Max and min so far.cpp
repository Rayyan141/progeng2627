#include <iostream>

int main(){

    int max, min, input;

    std::cout << "Enter a number" << std::endl;
    std::cin >> input;
    max = input;
    min = input;

    while (input != 0 ){
        
        if ( input > max){

            max = input;
        }
        else if ( input < min){
            
            min = input;
        }

        std::cout << "max: " << max << std::endl;
        std::cout << "min: " << min << std::endl;
        std::cout << "Enter a number" << std::endl;
        std::cin >> input;
    }
}