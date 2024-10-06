#ifndef InternalButtons_h
#define InternalButtons_h
#include "InternalDispatcher.hpp"
#include "ElevatorCar.hpp"
#include <queue>
class InternalButtons{
public:
    InternalDispatcher internalDispatcher;
    int availableButtons;
    int buttonSelected;

    InternalButtons();

    void pressButton(int destination, ElevatorCar* elevatorCar);
};

#endif
