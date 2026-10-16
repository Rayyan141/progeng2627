#include <iostream>

int main(){
    int n;

    std::cout << "Enter a number" << std::endl;
    std::cin >> n;

    if((n % 2) == 0){

        std::cout << "Number is even";

    }

    else{

        std::cout << "Number is odd";

    }
}
