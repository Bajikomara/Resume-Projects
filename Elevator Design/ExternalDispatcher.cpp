#include "ExternalDispatcher.hpp"
#include <iostream> 
#include "Direction.hpp" 

void ExternalDispatcher::submitExternalRequest(int floorNumber, Direction direction) {
    std::string dir = (direction == Direction::Up) ? "UP" : "DOWN"; // Corrected comparison
    std::cout << "External request on floor " << floorNumber << " in direction " << dir << std::endl;
}
