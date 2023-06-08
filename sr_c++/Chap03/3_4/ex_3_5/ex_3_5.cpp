// ��ǰ C++ ���α׷���
// 3.4 (p 115)
// ���� 3-5 ����

#include <iostream>

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() { std::cout << "(" << x << ", " << y << ")" << std::endl; }
};

Point::Point() : Point(0, 0) { } // Point(int a, int b) ������ ȣ��

Point::Point(int a, int b) : x(a), y(b) { }

int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}