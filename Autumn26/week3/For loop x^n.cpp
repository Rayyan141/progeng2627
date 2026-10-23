#include <iostream>

int main(){

    int x, n, final = 1;

    std::cin >> x >> n;

    for (  ; n > 0; n = n - 1){

        final = final * x;
        std::cout << final << std::endl;
    }

    
}   
