#include "ElevatorDisplay.h"
#include <iostream>

void ElevatorDisplay::showFloor(int floor) {
    std::cout << "Elevator is on floor: " << floor << std::endl;
}

void ElevatorDisplay::showDirection(Direction direction) {
    if (direction == Direction::UP) {
        std::cout << "Elevator is going UP." << std::endl;
    } else if (direction == Direction::DOWN) {
        std::cout << "Elevator is going DOWN." << std::endl;
    } else {
        std::cout << "Elevator is IDLE." << std::endl;
    }
}
