#include "ElevatorDoor.h"

ElevatorDoor::ElevatorDoor() : state(DoorState::CLOSED) {}

void ElevatorDoor::open() {
    state = DoorState::OPEN;
}

void ElevatorDoor::close() {
    state = DoorState::CLOSED;
}

DoorState ElevatorDoor::getState() {
    return state;
}
