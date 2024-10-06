#include<bits/stdc++.h>
#include "ElevatorCar.hpp"
#include <queue>
using namespace std;


ElevatorCar :: ElevatorCar():id(id), internalButtons(), elevatorState(), elevatorDirection(Direction :: Up), elevatorDoor(), currentFloor(currentFloor){};

void ElevatorCar :: showdisplay(){
    display.showDisplay();
    
}

void ElevatorCar :: pressButton(int destination){
    internalButtons.pressButton(destination, this);
}

void ElevatorCar :: setDisplay(){
    this->display.setDisplay(currentFloor, elevatorDirection);
}

bool ElevatorCar :: moveElevator(Direction dir, int destinationFloor){
    int startFloor = currentFloor;
    if (dir == Direction::Up ){
        for (int i = startFloor; i <=destinationFloor; i++){
            currentFloor = i;
            setDisplay();
            showdisplay();
            if(i == destinationFloor){
                return true;
            }
        }
    }

    if (dir == Direction :: down){
        for (int i = startFloor; i >= destinationFloor; i--){
            currentFloor = i;
            setDisplay();
            showdisplay();
            if (i == destinationFloor){
                return true;
            }
        }
    }
    return false;

}