#include <iostream>
#include <string>

int main()
{
    std::string input[3];
    std::cout << "�̸���? ";
    std::getline(std::cin, input[0]);
    
    std::cout << "�ּҴ�? ";
    std::getline(std::cin, input[1]);
    
    std::cout << "���̴�? ";
    std::getline(std::cin, input[2]);

    for(int i = 0; i < 3; i++) 
    {
        std::cout << input[i];

        if(i < 2)
            std::cout << ", ";
    }
    std::cout << std::endl;


}