#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(char *name, char *type) {

	this->name = name;
    std::cout << "<" << name  << " ("<< type << ") Braiiiiiinnnnssss" << std::endl;
    return;
}

Zombie::~Zombie(void) {

    std::cout << "Destroyed" << std::endl;
    return;
}
