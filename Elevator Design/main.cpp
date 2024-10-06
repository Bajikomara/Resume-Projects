#include <iostream>
#include <vector>           
#include "Floor.hpp"
#include "Building.hpp"

int main() {
    
    std::list<Floor> floorList;

    
    Floor floor1(1);
    Floor floor2(2);
    Floor floor3(3);
    Floor floor4(4);
    Floor floor5(5);

    // Add floors to the list
    floorList.push_back(floor1);
    floorList.push_back(floor2);
    floorList.push_back(floor3);
    floorList.push_back(floor4);
    floorList.push_back(floor5);

    // Create a Building object with the list of floors
    Building building(floorList);

    return 0;
}
