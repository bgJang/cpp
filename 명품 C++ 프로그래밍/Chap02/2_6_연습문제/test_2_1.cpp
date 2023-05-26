#include <iostream>

int main() 
{
    for(int i = 1; i < 100;) 
    {
        for(int j = 0; j < 10; j++) 
        {
            std::cout << i++ << "\t";
        }
        std::cout << std::endl;
    }
}