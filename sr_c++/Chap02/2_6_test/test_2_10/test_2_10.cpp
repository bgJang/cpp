#include <iostream>
#include <string>

int main()
{
    std::string input;

    std::cout << "문자열 입력 >> ";
    // std::cin >> input;
    std::getline(std::cin , input);

    for(int i = 0; i < input.length(); i++) 
    {
        std::cout << input.substr(0, i + 1) << std::endl;
    }
}