#include "ElevatorDisplay.hpp"
#include <bits/stdc++.h>
using namespace std;


ElevatorDisplay::ElevatorDisplay() : floor(0), direction(Direction::Up) {
}


void ElevatorDisplay::setDisplay(int floor, Direction direction) {
    this->floor = floor;             
    this->direction = direction;     
}

// Method to show the display
void ElevatorDisplay::showDisplay() {
    std::cout << "Current Floor: " << floor << std::endl;        
    std::cout << "Direction: " << (direction == Direction::Up ? "UP" : "DOWN") << std::endl; // Print current direction
}
