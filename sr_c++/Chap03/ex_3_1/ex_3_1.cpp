// ��ǰ C++ ���α׷���
// 3.3 (p 104)

#include <iostream>

class Circle 
{
public:
    int radius;
    double getArea();
};

double Circle::getArea() 
{
    return 3.14 * radius * radius;
}

int main()
{
	Circle donut; 
	donut.radius = 1; // donut ��ü�� �������� 1�� ����
	double area = donut.getArea(); // donut ��ü�� ���� �˾Ƴ���
	std::cout << "donut ������ " << area << std::endl;

	Circle pizza; 
	pizza.radius = 30; // pizza ��ü�� �������� 30���� ����
	area = pizza.getArea(); // pizza ��ü�� ���� �˾Ƴ���
	std::cout << "pizza ������ " << area << std::endl;
}