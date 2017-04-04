/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 09:18:13 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/04 13:41:46 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    srand(time(NULL));
    Zombie* tmp = new Zombie(zombiesName[rand() % 8], this->type);
    tmp->announce();
    return tmp;
}
