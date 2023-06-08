// 명품 C++ 프로그래밍
// 3.4 (p 110)
// 예제 3-4
#include <iostream>

class Circle {
public:
	int radius;
	Circle(); // 기본 생성자
	Circle(int r); // 매개 변수 있는 생성자
	double getArea();
}; 


Circle::Circle() : Circle(1) { }// 타겟 생성자

Circle::Circle(int r) { // 위임 생성자
	radius = r;
	std::cout << "반지름 " << radius << " 원 생성" << std::endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; // 매개 변수 없는 생성자 호출
	double area = donut.getArea();
	std::cout << "donut 면적은 " << area << std::endl;

	Circle pizza(30); // 매개 변수 있는 생성자 호출
	area = pizza.getArea();
	std::cout << "pizza 면적은 " << area << std::endl;
}
