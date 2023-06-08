// ��ǰ C++ ���α׷���
// 3.5 (p 123)
// ���� 3-7

#include <iostream>

class Circle {
public:
	int radius;
	Circle(); 
	Circle(int r); 
	~Circle(); // �Ҹ���
	double getArea(); 
};

Circle::Circle() {
	radius = 1;
	std::cout << "������ " << radius << " �� ����" << std::endl;
}

Circle::Circle(int r) {
	radius = r;
	std::cout << "������ " << radius << " �� ����" << std::endl;
}

Circle::~Circle() {
	std::cout << "������ " << radius << " �� �Ҹ�" << std::endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle donu;
	Circle pizza(30); 
	return 0;
}
