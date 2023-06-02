#include <iostream>

int main() 
{
    double result, input;

    std::cout << "5 개의 실수를 입력하라 : ";

    std::cin >> result;
    for(int i = 0; i < 4; i++) 
    {
        std::cin >> input;
        if(input > result) 
            result = input;
    }

    std::cout << "\n제일 큰 수 = " << result;
}