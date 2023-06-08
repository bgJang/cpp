// ��ǰ C++ ���α׷���
// 3.4 (p 119)
// ���� 3-5

#include <iostream>

class Rectangle { 
public:
	int width, height; 
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int length);
	bool isSquare();
};

Rectangle::Rectangle() { // Rectangle::Rectangle() : Rectangle(1) {}�� �ص� ��
	width = height = 1;
}

Rectangle::Rectangle(int w, int h) {
	width = w; height = h;
}

Rectangle::Rectangle(int length) { // Rectangle::Rectangle(int length) : Rectangle(length) {}�� �ص� ��
	width = height = length;
}

bool Rectangle::isSquare() { // ���簢���̸� true�� �����ϴ� ��� �Լ�
	if(width == height) return true;
	else return false;
}

int main() {
	Rectangle rect1; 
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if(rect1.isSquare()) std::cout << "rect1�� ���簢���̴�." << std::endl;
	if(rect2.isSquare()) std::cout << "rect2�� ���簢���̴�." << std::endl;
	if(rect3.isSquare()) std::cout << "rect3�� ���簢���̴�." << std::endl;
}