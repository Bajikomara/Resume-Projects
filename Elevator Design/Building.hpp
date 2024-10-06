#ifndef Building_h
#define Building_h
#include "Floor.hpp"
#include<bits/stdc++.h>
using namespace std;

class Building{
    public:
        list <Floor> floorList;
        Building(list<Floor> floors);
        void add_floors(Floor floor);
        void remove_floors(Floor floor);
        list<Floor> get_all_floors();
};

#endif