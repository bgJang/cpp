#include <iostream>
#include <string>

int main() 
{
    std::string str1, str2;

    std::cout << "새 암호를 입력하세요 >> ";
    std::getline(std::cin, str1);

    std::cout << "새 암호를 다시 한번 입력하세요 >> ";
    std::getline(std::cin, str2);

    if(str1 == str2)
    {
        std::cout << "같습니다" << std::endl;
    }
    else
    {
        std::cout << "같지 않습니다" << std::endl;
    }

}