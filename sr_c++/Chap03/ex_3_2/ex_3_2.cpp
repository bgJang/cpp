// 명품 C++ 프로그래밍
// 3.3 (p 106)
// 예제 3-2

#include <iostream> 

class Rectangle { // Rectangle 클래스 선언
public:
	int width; 
	int height; 
	int getArea(); // 면적을 계산하여 리턴하는 함수
};

int Rectangle::getArea() {
	return width * height;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	std::cout << "사각형의 면적은 " << rect.getArea() << std::endl;
}