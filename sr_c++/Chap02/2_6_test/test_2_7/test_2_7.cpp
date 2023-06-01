#include <iostream>
#include <string>

int main() 
{
    std::string input;


    while(true) 
    {
        std::cout << "종료하고 싶으면 yes를 입력하시오 >> ";
        std::getline(std::cin, input);
        if(input == "yes")
            break;
    }  
    std::cout << "종료합니다...";
}