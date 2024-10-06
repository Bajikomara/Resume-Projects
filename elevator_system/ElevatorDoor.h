#ifndef ELEVATOR_DOOR_H
#define ELEVATOR_DOOR_H

enum class DoorState {
    OPEN,
    CLOSED
};

class ElevatorDoor {
public:
    ElevatorDoor();
    void open();
    void close();
    DoorState getState();

private:
    DoorState state;
};

#endif
