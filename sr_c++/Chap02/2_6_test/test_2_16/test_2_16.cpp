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
    std::cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << std::endl << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << std::endl;

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
