#include "Date.h"
#include <string>
#include <iostream>

Date::Date(int year, int month, int day)
{
    this->year = year;
    this->month = month;
    this->day = day;
}

Date::Date(std::string str)
{
    year = std::stoi(str.substr(0, 4));
    month = std::stoi(str.substr(str.find('/') + 1, str.rfind('/') - str.find('/') - 1));
    day = std::stoi(str.substr(str.rfind('/') + 1, 2));
}

void Date::show()
{
    std::cout << year << "³â " << month << "¿ù " << day << "ÀÏ" << std::endl;
}

int Date::getYear() 
{
    return year;
}
int Date::getMonth() 
{
    return month;
}
int Date::getDay() 
{
    return day;
}