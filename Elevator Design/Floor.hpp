#ifndef Floor_h
#define Floor_h

#include <bits/stdc++.h>
#include "ExternalDispatcher.hpp"

using namespace std;

class Floor{
    public:
        int floor_number;
        ExternalDispatcher externalDispatcher;

        Floor(int floor_number);
        void press_button(Direction direction);
};


#endif