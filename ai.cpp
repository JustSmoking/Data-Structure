#include "ai.hpp"
#include <iostream>

Bot::Bot(int x, int y, bool state)
{
    this->_state = state;
    this->_x = x;
    this->_y = y;
}

void Bot::PrintBotInfo()
{
    std::cout << this->_x << " " << this->_y << " " << this->_state << std::endl;
}

Bot& Bot::operator=(const Bot &Other)
{
    if (this == &Other)
    {
        return *this;
    }
    this->_state = Other._state;
    this->_x = Other._x;
    this->_y = Other._y;

    return *this;
    
}

Bot::Bot()
{
    this->_state = true;
    this->_x = false;
    this->_y = false;
}