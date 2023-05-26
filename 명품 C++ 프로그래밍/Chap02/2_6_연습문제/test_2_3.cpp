#include <iostream>

int main() 
{
    int i, j;
    std::cout << "두 수를 입력하라>>";
    std::cin >> i >> j;

    std::cout << "\n큰 수 : " << (i > j ? i : j) << std::endl;
}