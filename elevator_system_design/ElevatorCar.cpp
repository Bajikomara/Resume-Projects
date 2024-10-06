#include "ElevatorCar.h"

ElevatorCar::ElevatorCar(int id) : id(id), currentFloor(0), direction(Direction::NONE), state(ElevatorState::IDLE) {}

void ElevatorCar::move() {
    
}

void ElevatorCar::stop() {
    state = ElevatorState::STOPPED;
}

Direction ElevatorCar::getDirection() {
    return direction;
}

void ElevatorCar::setDirection(Direction dir) {
    direction = dir;
}

int ElevatorCar::getCurrentFloor() {
    return currentFloor;
}

void ElevatorCar::setCurrentFloor(int floor) {
    currentFloor = floor;
}

ElevatorState ElevatorCar::getState() {
    return state;
}
