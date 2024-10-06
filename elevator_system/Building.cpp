#include "Building.h"

Building::Building(int numFloors, int numElevators) {
    for (int i = 0; i < numFloors; ++i) {
        floors.push_back(Floor(i));
    }
    elevatorController = new ElevatorController(numElevators);
}

Building::~Building() {
    delete elevatorController;
}

Floor* Building::getFloor(int floorNumber) {
    return &floors[floorNumber];
}

ElevatorController* Building::getElevatorController() {
    return elevatorController;
}
