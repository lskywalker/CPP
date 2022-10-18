#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
    public:
        std::string     ideas[100];
        Brain();
        ~Brain();
        Brain   &operator=(Brain const &var);
        Brain(Brain const &ref);
};

#endif