// ��ǰ C++ ���α׷���
// 3.3 (p 106)
// ���� 3-2

#include <iostream> 

class Rectangle { // Rectangle Ŭ���� ����
public:
	int width; 
	int height; 
	int getArea(); // ������ ����Ͽ� �����ϴ� �Լ�
};

int Rectangle::getArea() {
	return width * height;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	std::cout << "�簢���� ������ " << rect.getArea() << std::endl;
}