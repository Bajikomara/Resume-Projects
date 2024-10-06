#include "Floor.h"

Floor::Floor(int floorNumber) : floorNumber(floorNumber) {}

int Floor::getFloorNumber() {
    return floorNumber;
}

void Floor::pressUpButton() {
    dispatcher.requestElevator(floorNumber, Direction::UP);
}

void Floor::pressDownButton() {
    dispatcher.requestElevator(floorNumber, Direction::DOWN);
}
