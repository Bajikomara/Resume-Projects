#include "ExternalDispatcher.h"
#include <iostream>

void ExternalDispatcher::requestElevator(int floor, Direction direction) {
    std::cout << "External request: Floor " << floor << ", Direction: ";
    if (direction == Direction::UP) {
        std::cout << "UP" << std::endl;
    } else {
        std::cout << "DOWN" << std::endl;
    }
    
}
