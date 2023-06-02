#include <iostream>
#include <string>
int main()
{
    int input, num;
    std::string menu[3] = {"짬뽕", "짜장", "군만두"};

    std::cout << "승리장에 오신것을 환영합니다.";
    while (true)
    {
        std::cout << menu[0] << " : 1, " << menu[1] << " : 2, " << menu[2] << " : 3, 종료 : 4 >> ";
        std::cin >> input;

        if(input == 4)
        {
            std::cout << "오늘 영업은 끝났습니다." << std::endl;
            break;
        }
        if(input > 0 && input < 4)
        {
            std::cout << "몇 인분?";
            std::cin >> num;

            std::cout << menu[input] << " " << num << "인분 나왔습니다." << std::endl;
        }
        else 
        {
            std::cout << "다시 주문하세요!" << std::endl;
        }
    }
}