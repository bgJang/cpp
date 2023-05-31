#include "tower.hpp"

Tower::Tower() : height(1) { }
Tower::Tower(int height) : height(height) {}

int Tower::getHeight() 
{
    return this->height;
}