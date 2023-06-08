// ��ǰ C++ ���α׷���
// 3.4 (p 110)
// ���� 3-4
#include <iostream>

class Circle {
public:
	int radius;
	Circle(); // �⺻ ������
	Circle(int r); // �Ű� ���� �ִ� ������
	double getArea();
}; 


Circle::Circle() : Circle(1) { }// Ÿ�� ������

Circle::Circle(int r) { // ���� ������
	radius = r;
	std::cout << "������ " << radius << " �� ����" << std::endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; // �Ű� ���� ���� ������ ȣ��
	double area = donut.getArea();
	std::cout << "donut ������ " << area << std::endl;

	Circle pizza(30); // �Ű� ���� �ִ� ������ ȣ��
	area = pizza.getArea();
	std::cout << "pizza ������ " << area << std::endl;
}
