#include <iostream>
#include <string>

int main()
{
    std::string input[3];
    std::cout << "이름은? ";
    std::getline(std::cin, input[0]);
    
    std::cout << "주소는? ";
    std::getline(std::cin, input[1]);
    
    std::cout << "나이는? ";
    std::getline(std::cin, input[2]);

    for(int i = 0; i < 3; i++) 
    {
        std::cout << input[i];

        if(i < 2)
            std::cout << ", ";
    }
    std::cout << std::endl;


}