#ifndef BUILDING_H
#define BUILDING_H

#include "Floor.h"
#include "ElevatorController.h"

class Building {
public:
    Building(int numFloors, int numElevators);
    ~Building();
    Floor* getFloor(int floorNumber);
    ElevatorController* getElevatorController();

private:
    std::vector<Floor> floors;
    ElevatorController* elevatorController;
};

#endif
