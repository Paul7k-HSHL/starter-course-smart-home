#ifndef SWITCH_H
#define SWITCH_H

#include <string>

class Switch {
private:
    int _id;

public:
    std::string name;
    bool state;

    Switch(std::string name) {
        _id = rand();
        this->name = name;
        state = false;
    }
};



#endif //SWITCH_H
