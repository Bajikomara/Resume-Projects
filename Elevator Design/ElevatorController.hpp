#ifndef ElevatorController_hpp
#define ElevatorController_hpp

#include "Direction.hpp"
#include "ElevatorCar.hpp"
#include <bits/stdc++.h>
#include <queue>
using namespace std;

class ElevatorController{
public:
    priority_queue<int> upMinPQ;
    priority_queue<int, list<int>, greater<int>> downmaxPq;
    ElevatorCar elevatorCar;


    ElevatorController(ElevatorCar elevatorcar);

    void submitExternalRequest(int floor, Direction direction);

    void submitInternalRequest(int floor);

    void controlElevator();
};

#endif