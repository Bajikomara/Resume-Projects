#ifndef ELEVATOR_CONTROLLER_H
#define ELEVATOR_CONTROLLER_H

#include "ElevatorCar.h"
#include "ExternalDispatcher.h"
#include "InternalDispatcher.h"
#include <vector>

class ElevatorController {
public:
    ElevatorController(int numElevators);
    void requestElevator(int floor, Direction direction);
    void assignElevator(ElevatorCar* car);

    
    ElevatorCar& getElevator(int index);

private:
    std::vector<ElevatorCar> elevators;
    ExternalDispatcher externalDispatcher;
    InternalDispatcher internalDispatcher;
};

#endif
