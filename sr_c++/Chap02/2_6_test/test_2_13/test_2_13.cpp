#include <iostream>
#include <string>
int main()
{
    int input, num;
    std::string menu[3] = {"«��", "¥��", "������"};

    std::cout << "�¸��忡 ���Ű��� ȯ���մϴ�.";
    while (true)
    {
        std::cout << menu[0] << " : 1, " << menu[1] << " : 2, " << menu[2] << " : 3, ���� : 4 >> ";
        std::cin >> input;

        if(input == 4)
        {
            std::cout << "���� ������ �������ϴ�." << std::endl;
            break;
        }
        if(input > 0 && input < 4)
        {
            std::cout << "�� �κ�?";
            std::cin >> num;

            std::cout << menu[input] << " " << num << "�κ� ���Խ��ϴ�." << std::endl;
        }
        else 
        {
            std::cout << "�ٽ� �ֹ��ϼ���!" << std::endl;
        }
    }
}