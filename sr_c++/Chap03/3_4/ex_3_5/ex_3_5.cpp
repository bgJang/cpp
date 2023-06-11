// 명품 C++ 프로그래밍
// 3.4 (p 115)
// 예제 3-5 정답

#include <iostream>

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() { std::cout << "(" << x << ", " << y << ")" << std::endl; }
};

Point::Point() : Point(0, 0) { } // Point(int a, int b) 생성자 호출

Point::Point(int a, int b) : x(a), y(b) { }

int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}