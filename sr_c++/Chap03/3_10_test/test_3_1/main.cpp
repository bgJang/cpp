// p.149 �������� 3-1

#include <iostream>
#include "tower.h"

int main() {
    Tower myTower; // 1meter
    Tower seoulTower(100);

    std::cout << "���̴� " << myTower.getHeight() << std::endl;
    std::cout << "���̴� " << seoulTower.getHeight() << std::endl;
}


