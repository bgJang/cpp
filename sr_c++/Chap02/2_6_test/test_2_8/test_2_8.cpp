#include <iostream>
#include <string>

int main() 
{
    std::string input[5];
    int longest = 0;

    std::cout << "5명의 이름을 ';'으로 구분하여 입력하세요 ";

    for(int i = 0; i < 5; i++) 
    {
        std::getline(std::cin, input[i], ';');
        
        std::cout << i + 1 << " : " << input[i] << std::endl;

        if(input[i].length() > input[longest].length())
            longest = i;
    }
    std::cout << "가장 긴 이름은 " << input[longest] << std::endl;
}