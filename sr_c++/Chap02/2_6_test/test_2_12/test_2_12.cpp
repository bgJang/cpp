#include <iostream>

int sum(int, int);

int main()
{
    int n = 0;
    std::cout << "�� ���� �Է��ϼ��� >> ";
    std::cin >> n;

    std::cout << "1���� " << n << "������ ���� " << sum(1, n) << "�Դϴ�." << std::endl;

}

int sum(int a, int b)
{
    int k, res = 0;

    for(k = a; k <= b; k++)
        res += k;

    return res;
}