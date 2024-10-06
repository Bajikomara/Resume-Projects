#ifndef INTERNAL_BUTTONS_H
#define INTERNAL_BUTTONS_H

#include <vector>

class InternalButtons {
public:
    InternalButtons();
    void pressButton(int floor);
    bool isButtonPressed(int floor);

private:
    std::vector<bool> buttons;
};

#endif
