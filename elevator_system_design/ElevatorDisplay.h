#ifndef ELEVATOR_DISPLAY_H
#define ELEVATOR_DISPLAY_H

#include "Direction.h"

class ElevatorDisplay {
public:
    void showFloor(int floor);
    void showDirection(Direction direction);
};

#endif
