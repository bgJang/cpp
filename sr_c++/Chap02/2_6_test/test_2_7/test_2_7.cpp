#include <iostream>
#include <string>

int main() 
{
    std::string input;


    while(true) 
    {
        std::cout << "�����ϰ� ������ yes�� �Է��Ͻÿ� >> ";
        std::getline(std::cin, input);
        if(input == "yes")
            break;
    }  
    std::cout << "�����մϴ�...";
}