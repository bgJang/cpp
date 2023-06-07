// Input
/*
Wise men say, only fools rush in
But I can't help, falling in love with you

Shall I stay? Would it be a sin?
If I can't help, falling in love with you

Like a river flows, surely to the sea
Darling so it goes, some things aren't meant to be ;

*/

#include <iostream>
#include <cstring>

int main()
{
    char buf[10001];
    int results[256];

    for(int i = 'a' ; i <= 'z'; i++) 
    {
        results[i] = 0;
    }
    std::cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << std::endl << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << std::endl;

    std::cin.getline(buf, 10000, ';');

    for(int i = 0; i < strlen(buf); i++)
    {
        results[tolower(buf[i])]++;
    }

    for(int i = 'a' ; i <= 'z'; i++) 
    {
        std::cout << (char) i << " (" << results[i] << ")\t: ";
        for(int j = 0; j < results[i]; j++) 
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
