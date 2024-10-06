#include "Floor.hpp"
#include<bits/stdc++.h>


using namespace std;

Floor :: Floor(int floor_number) : floor_number(floor_number), externalDispatcher() {}

void Floor :: press_button(Direction direction){
    externalDispatcher.submitExternalRequest(floor_number, direction);
}