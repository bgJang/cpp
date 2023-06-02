#include <iostream>
#include <string>

int main()
{
    int income = 0, price;
    std::string menu;
    int cups;
    std::cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << std::endl;

    while(income < 20000) 
    {
        std::cout << "주문 >> ";
        std::cin >> menu >> cups;

        if(menu == "에스프레소") 
        {
            price = 2000 * cups;
        }
        else if(menu == "아메리카노") 
        {
            price = 2300 * cups;
        }
        if(menu == "카푸치노") 
        {
            price = 2500 * cups;
        }

        income += price;
        std::cout << price << "원 입니다. 맛있게 드세요" << std::endl;;
    }
    std::cout << "오늘 " << income << "원을 판매하여 카페를 닫습니다. 내일 봐요!!!" << std::endl;
}