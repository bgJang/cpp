// 명품 C++ 프로그래밍
// 3.4 (p 119)
// 예제 3-5

#include <iostream>

class Rectangle { 
public:
	int width, height; 
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int length);
	bool isSquare();
};

Rectangle::Rectangle() { // Rectangle::Rectangle() : Rectangle(1) {}로 해도 됨
	width = height = 1;
}

Rectangle::Rectangle(int w, int h) {
	width = w; height = h;
}

Rectangle::Rectangle(int length) { // Rectangle::Rectangle(int length) : Rectangle(length) {}로 해도 됨
	width = height = length;
}

bool Rectangle::isSquare() { // 정사각형이면 true를 리턴하는 멤버 함수
	if(width == height) return true;
	else return false;
}

int main() {
	Rectangle rect1; 
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if(rect1.isSquare()) std::cout << "rect1은 정사각형이다." << std::endl;
	if(rect2.isSquare()) std::cout << "rect2는 정사각형이다." << std::endl;
	if(rect3.isSquare()) std::cout << "rect3는 정사각형이다." << std::endl;
}