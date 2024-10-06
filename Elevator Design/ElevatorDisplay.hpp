#ifndef ElevatorDisplay_h
#define ElevatorDisplay_h
#include "Direction.hpp"
class ElevatorDisplay{
public:
    int floor;
    Direction direction;
    ElevatorDisplay();
    void setDisplay(int floor, Direction direction);
    void showDisplay();

};

#endif