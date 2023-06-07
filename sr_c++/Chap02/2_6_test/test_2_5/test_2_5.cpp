#include <iostream>

// input : xhehfhaef x-d y-a
int main() 
{
    int count = 0;
    char input[100];
    std::cout << "문자들을 입력하라 (100개 미만)." << std::endl;
    
    std::cin.getline(input, 100, '\n');

    for(int i = 0; i < 100; i++) 
    {
        if(input[i] == 'x')
            count++;
    }

    std::cout << "x의 개수는 " << count << std::endl;
}