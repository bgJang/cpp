#include <iostream>

// input : xhehfhaef x-d y-a
int main() 
{
    int count = 0;
    char input[100];
    std::cout << "���ڵ��� �Է��϶� (100�� �̸�)." << std::endl;
    
    std::cin.getline(input, 100, '\n');

    for(int i = 0; i < 100; i++) 
    {
        if(input[i] == 'x')
            count++;
    }

    std::cout << "x�� ������ " << count << std::endl;
}