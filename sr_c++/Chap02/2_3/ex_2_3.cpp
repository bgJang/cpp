#include <iostream>

int main() {
	std::cout << "너비를 입력하세요>>";

	int width;
	std::cin >> width; // 키보드로부터 너비를 읽어 width 변수에 저장

	std::cout << "높이를 입력하세요>>";

	int height;
	std::cin >> height; // 키보드로부터 높이를 읽어 height 변수에 저장

	int area = width * height; // 사각형의 면적 계산
	std::cout << "면적은 " << area << "\n"; // 면적을 출력하고 다음 줄로 넘어감
}