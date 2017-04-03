/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 09:18:13 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/03 14:34:06 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

std::string ZombieEvent::zombiesName[8] = {"Bill", "Zoey", "Francis", "Louis", "Nick", "Coach", "Ellis", "Rochelle"};

ZombieEvent::ZombieEvent(void) {
    std::cout << "Create ZombieEvent" << std::endl;
    return;
}

ZombieEvent::~ZombieEvent(void) {
    std::cout << "Destroyed ZombieEvent" << std::endl;
    return;
}

void ZombieEvent::setZombieType(std::string type) {
    std::cout << "SetZombieType " << type << std::endl;
    this->type = type;
    return;
}

Zombie* ZombieEvent::newZombie(std::string name) {
    return new Zombie(name, this->type);
}

Zombie* ZombieEvent::randomChump(void) {
    time_t rawtime;
    struct tm * timeinfo;
    char buffer [8];

    time (&rawtime);
    timeinfo = localtime (&rawtime);

    strftime (buffer, 8, "%S", timeinfo);
    srand(atoi(buffer));

    Zombie* tmp = new Zombie(zombiesName[rand() % 8], this->type);
    tmp->announce();
    return tmp;
}
