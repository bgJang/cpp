#include <string>

class Date
{
    int year, month, day;

    public:
    Date(int, int, int);
    Date(std::string);
    void show();
    
    int getYear();
    int getMonth();
    int getDay();
};