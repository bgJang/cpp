#include <iostream>
#include <string>

int main()
{
    int income = 0, price;
    std::string menu;
    int cups;
    std::cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << std::endl;

    while(income < 20000) 
    {
        std::cout << "�ֹ� >> ";
        std::cin >> menu >> cups;

        if(menu == "����������") 
        {
            price = 2000 * cups;
        }
        else if(menu == "�Ƹ޸�ī��") 
        {
            price = 2300 * cups;
        }
        if(menu == "īǪġ��") 
        {
            price = 2500 * cups;
        }

        income += price;
        std::cout << price << "�� �Դϴ�. ���ְ� �弼��" << std::endl;;
    }
    std::cout << "���� " << income << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����!!!" << std::endl;
}