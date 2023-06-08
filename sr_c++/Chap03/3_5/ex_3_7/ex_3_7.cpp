// ��ǰ C++ ���α׷���
// 3.5 (p 123, 124)
// ���� 3-7, 8

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


Circle globalDonut(1000);
Circle globalPizza(2000);

void f() {
	Circle fDonut(100);
	Circle fPizza(200);
}

int main() {
	Circle mainDonut;
	Circle mainPizza(30);
	f();
}

