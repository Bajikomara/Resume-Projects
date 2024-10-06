#ifndef InternalDispatcher_h
#define InternalDispatcher_h
#include "ElevatorController.hpp"
#include "ElevatorCar.hpp"
#include "ElevatorCreator.hpp"
#include <queue>
class InternalDispatcher{
public:
    list < ElevatorController> elevatorControllerList;
    InternalDispatcher();

    void submitInternalRequest(int floor, ElevatorCar elevatorCar );
};

#endif