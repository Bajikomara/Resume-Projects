#ifndef ElevatorCar_h
#define ElevatorCar_h
#include "Direction.hpp"
#include "ElevatorDisplay.hpp"
#include "InternalButtons.hpp"
#include "ElevatorState.hpp"
#include "ElevatorDoor.hpp"
#include <queue>


class ElevatorCar{
public:
    int id;
    ElevatorDisplay display;
    InternalButtons internalButtons;
    ElevatorState elevatorState;
    int currentFloor;
    int destinationFloor;
    Direction elevatorDirection;
    ElevatorDoor elevatorDoor;

    ElevatorCar() ;


    void showdisplay();

    void pressButton(int destination);

    void setDisplay();

    bool moveElevator(Direction dir, int destinationFloor);

};

#endif
