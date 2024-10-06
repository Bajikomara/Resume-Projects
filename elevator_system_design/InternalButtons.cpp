#include "InternalButtons.h"

InternalButtons::InternalButtons() {
    buttons.resize(10, false);  
}

void InternalButtons::pressButton(int floor) {
    if (floor < buttons.size()) {
        buttons[floor] = true;
    }
}

bool InternalButtons::isButtonPressed(int floor) {
    if (floor < buttons.size()) {
        return buttons[floor];
    }
    return false;
}
