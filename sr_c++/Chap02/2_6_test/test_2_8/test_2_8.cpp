#include <iostream>
#include <string>

int main() 
{
    std::string input[5];
    int longest = 0;

    std::cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ��� ";

    for(int i = 0; i < 5; i++) 
    {
        std::getline(std::cin, input[i], ';');
        
        std::cout << i + 1 << " : " << input[i] << std::endl;

        if(input[i].length() > input[longest].length())
            longest = i;
    }
    std::cout << "���� �� �̸��� " << input[longest] << std::endl;
}