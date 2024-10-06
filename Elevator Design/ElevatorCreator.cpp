#include "ElevatorCreator.hpp"
#include<bits/stdc++.h>

using namespace std;

list<ElevatorController> ElevatorCreator::elevatorControllerList;

ElevatorCreator::ElevatorCreator() {
    ElevatorCar elevatorCar1;
    elevatorCar1.id = 1; 
    ElevatorController controller1(elevatorCar1); 
    
    
    ElevatorCar elevatorCar2;
    elevatorCar2.id = 2; 
    ElevatorController controller2(elevatorCar2); 

    
    elevatorControllerList.push_back(controller1);
    elevatorControllerList.push_back(controller2);
}
