// 백준 코딩테스트 준비 - 기초
// https://code.plus/course/51
// 02. 수학 - 나머지
// https://www.acmicpc.net/problem/10430

/*
5 8 4

1
1
0
0

*/


#include <iostream>

class Test 
{
    int a, b, c;
public:
    Test() { std::cin >> a >> b >> c; }
    ~Test() { return; }

    // (A+B)%C
    void answer1() { std::cout << (a + b) % c << std::endl; }
    
    // ((A%C) + (B%C))%C
    void answer2() { std::cout << ( (a % c) + (b % c) ) % c << std::endl; }

	// (A×B)%C
    void answer3() { std::cout << (a * b) % c << std::endl; }

	// ((A%C) × (B%C))%C
    void answer4() { std::cout << ((a % c) * (b % c)) % c  << std::endl; }
};

int main()
{
	Test test; 
    test.answer1();
    test.answer2();
    test.answer3();
    test.answer4();
}