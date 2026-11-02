#include <iostream>

bool leap_year(int year){
    bool ly;

    ly = false;

    if ( year % 4 == 0 ){

        if ( year % 100 == 0){

            if ( year % 400 == 0 ){

                ly = true;
            }
        }

        else{

            ly = true;
        }
    }

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){

    d2 = d1;
    m2 = m1;
    y2 = y1;

    if ( d1 < 28){

        d2 = d1 + 1;
    }

    else if ( d1 == 30 && ( m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11)){
        
        d2 = 1;
        m2 = m1 + 1;
    }

    else if ( d1 == 31){

        if ( m1 == 12){
            
            y2 = y1 + 1;
            d2 = 1;
            m2 = 1;
        }

        else{

            d2 = 1;
            m2 = m2 + 1;
        }
    }

    else if ( m1 == 2){

        if (leap_year(y1) && d1 == 28){

            d2 = 29;
        }

        else{

            d2 = 1;
            m2 = 3;
        }
    }

}

int main(){
    int d1, d2, m1, m2, y1, y2;

    std::cout << "Enter date ( dd/mm/yy)" << std::endl;
    std::cin >> d1 >> m1 >> y1;

    next_date(d1, m1, y1, d2, m2, y2);

    std::cout << "Next date: " << d2 << "/" << m2 << "/" << y2;
}