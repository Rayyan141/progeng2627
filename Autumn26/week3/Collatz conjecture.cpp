#include <iostream>

int main(){

    int x, max, num_steps = 0;

    std::cout << "Enter a number" << std::endl;
    std::cin >> x;

    max = x;

    while ( x != 1){

        if ( x % 2 == 0){

            x = x /2;
        }

        else{

            x = 3 * x + 1;
            max = x;
        }

        num_steps++;
        std::cout << x << std::endl;
    }

    std::cout << "Max = " << max << std::endl;
    std::cout << "Number of steps = " << num_steps;
}