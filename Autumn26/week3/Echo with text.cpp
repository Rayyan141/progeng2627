#include <iostream>

int main(){
    std::string n;

    while (( n != "stop" ) && ( n != "Stop")){
        std::cin >> n;
        std::cout << n << std::endl;
    }
}