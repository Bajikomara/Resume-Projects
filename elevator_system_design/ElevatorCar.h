#ifndef ELEVATOR_CAR_H
#define ELEVATOR_CAR_H

#include "Direction.h"
#include "ElevatorDoor.h"
#include "InternalButtons.h"
#include "ElevatorState.h"

class ElevatorCar {
public:
    ElevatorCar(int id);
    void move();
    void stop();
    Direction getDirection();
    void setDirection(Direction direction);
    int getCurrentFloor();
    void setCurrentFloor(int floor);
    ElevatorState getState();

private:
    int id;
    int currentFloor;
    Direction direction;
    ElevatorDoor door;
    InternalButtons buttons;
    ElevatorState state;
};

#endif
