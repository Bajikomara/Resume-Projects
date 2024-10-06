#include "Building.h"
#include "ElevatorDisplay.h"

int main() {
    
    Building building(10, 3);

    
    building.getElevatorController()->requestElevator(3, Direction::UP);

    
    ElevatorCar& elevator = building.getElevatorController()->getElevator(0);
    elevator.setCurrentFloor(3);
    elevator.setDirection(Direction::UP);
    elevator.move();
    
    
    ElevatorDisplay display;
    display.showFloor(elevator.getCurrentFloor());
    display.showDirection(elevator.getDirection());

    return 0;
}
