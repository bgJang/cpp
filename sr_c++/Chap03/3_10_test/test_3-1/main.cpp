// p.149 연습문제 3-1

#include <iostream>
#include "tower.h"

int main() {
    Tower myTower; // 1meter
    Tower seoulTower(100);

    std::cout << "높이는 " << myTower.getHeight() << std::endl;
    std::cout << "높이는 " << seoulTower.getHeight() << std::endl;
}


