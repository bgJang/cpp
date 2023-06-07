#include <iostream>
#include "Date.h"

int main() 
{
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.show(); // 1945³â 8¿ù 15ÀÏ

    std::cout << birth.getYear() << ", " << birth.getMonth() << ", " << birth.getDay() << std::endl; // 2014, 3, 20
}