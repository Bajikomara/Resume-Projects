#ifndef EXTERNAL_DISPATCHER_H
#define EXTERNAL_DISPATCHER_H

#include "Direction.h"

class ExternalDispatcher {
public:
    void requestElevator(int floor, Direction direction);
};

#endif
