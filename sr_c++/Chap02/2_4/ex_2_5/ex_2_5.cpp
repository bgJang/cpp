#include <iostream>
#include <cstring>

int main() {
	char password[11];
	std::cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���." << std::endl;
	while(true) {
		std::cout << "��ȣ>>";
		std::cin >> password;
		if(strcmp(password, "C++") == 0) {
			std::cout << "���α׷��� ���� �����մϴ�." << std::endl;
			break;
		}
		else 
			std::cout << "��ȣ�� Ʋ���ϴ�~~" << std::endl;
	}
}