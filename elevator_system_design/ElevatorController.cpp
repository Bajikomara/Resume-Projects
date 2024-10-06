#include "ElevatorController.h"

ElevatorController::ElevatorController(int numElevators) {
    for (int i = 0; i < numElevators; ++i) {
        elevators.push_back(ElevatorCar(i));
    }
}

void ElevatorController::requestElevator(int floor, Direction direction) {
    externalDispatcher.requestElevator(floor, direction);
}

void ElevatorController::assignElevator(ElevatorCar* car) {
    
    car->move();
}


ElevatorCar& ElevatorController::getElevator(int index) {
    return elevators.at(index); 
