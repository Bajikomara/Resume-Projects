#include<bits/stdc++.h>
#include "ElevatorController.hpp"
#include <queue>

using namespace std;

ElevatorController :: ElevatorController(ElevatorCar) : upMinPQ(upMinPQ), downmaxPq(downmaxPq),elevatorCar(){}

void ElevatorController :: submitExternalRequest(int floor, Direction dir){
    if (dir == Direction :: down){
        downmaxPq.push(floor);
    }else{
        upMinPQ.push(floor);
    }
}

void ElevatorController :: submitInternalRequest(int floor){

}

void ElevatorController :: controlElevator(){
    while (true){
        if (elevatorCar.elevatorDirection == Direction :: Up){

        }
    }
}