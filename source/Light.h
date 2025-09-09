#ifndef LIGHT_H
#define LIGHT_H

#include <string>

class Light {
private:
    int _id;

public:
    std::string name;
    bool state;
    int temperature;
    int brightness;

    Light(std::string name) {
        _id = rand();
        this->name = name;
        state = false;
        temperature = 3500;
        brightness = 500;
    }
};



#endif //LIGHT_H
