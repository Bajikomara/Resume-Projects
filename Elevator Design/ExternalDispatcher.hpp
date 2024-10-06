#ifndef ExternalDispatcher_h
#define ExternalDispatcher_h
#include "ElevatorController.hpp"
#include "Direction.hpp"
#include<bits/stdc++.h>
using namespace std;

class ExternalDispatcher{
public:
    list<ElevatorController> elevatorControllerList ;
    void submitExternalRequest(int floor_number, Direction direction);
};

#endif