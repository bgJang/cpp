#include <iostream>
#include <string>

int main() 
{
    std::string str1, str2;

    std::cout << "�� ��ȣ�� �Է��ϼ��� >> ";
    std::getline(std::cin, str1);

    std::cout << "�� ��ȣ�� �ٽ� �ѹ� �Է��ϼ��� >> ";
    std::getline(std::cin, str2);

    if(str1 == str2)
    {
        std::cout << "�����ϴ�" << std::endl;
    }
    else
    {
        std::cout << "���� �ʽ��ϴ�" << std::endl;
    }

}