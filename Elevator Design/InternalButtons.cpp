#include "InternalButtons.hpp"
#include "InternalDispatcher.hpp"
#include <bits/stdc++.h>
using namespace std;
InternalButtons :: InternalButtons() : availableButtons(availableButtons), buttonSelected(buttonSelected),internalDispatcher() {}
void InternalButtons :: pressButton(int destination, ElevatorCar* elevatorCar){
    internalDispatcher.submitInternalRequest(destination, *elevatorCar);
}