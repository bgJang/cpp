// 명품 C++ 프로그래밍
// 3.5 (p 123)
// 예제 3-7

#include <iostream>

class Circle {
public:
	int radius;
	Circle(); 
	Circle(int r); 
	~Circle(); // 소멸자
	double getArea(); 
};

Circle::Circle() {
	radius = 1;
	std::cout << "반지름 " << radius << " 원 생성" << std::endl;
}

Circle::Circle(int r) {
	radius = r;
	std::cout << "반지름 " << radius << " 원 생성" << std::endl;
}

Circle::~Circle() {
	std::cout << "반지름 " << radius << " 원 소멸" << std::endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle donu;
	Circle pizza(30); 
	return 0;
}
