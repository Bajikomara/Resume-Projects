#include "Building.hpp"
#include <bits/stdc++.h>

using namespace std;

Building :: Building(list<Floor> floors) : floorList(floors){}

void Building :: add_floors(Floor newfloor){
    floorList.push_back(newfloor);
}

void Building :: remove_floors(Floor removfloor){
    floorList.remove(removfloor);
}

list<Floor> Building :: get_all_floors(){
    return floorList;
}