#ifndef FLOOR_H
#define FLOOR_H

#include "ExternalDispatcher.h"

class Floor {
public:
    Floor(int floorNumber);
    int getFloorNumber();
    void pressUpButton();
    void pressDownButton();

private:
    int floorNumber;
    ExternalDispatcher dispatcher;
};

#endif
