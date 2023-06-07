#include "Tower.h"

Tower::Tower() { }
Tower::Tower(int height) : height(height) {}

int Tower::getHeight() 
{
    return this->height;
}