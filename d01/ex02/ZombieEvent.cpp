/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 09:18:13 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/05 13:27:24 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

std::string ZombieEvent::_zombiesName[8] = {"Bill", "Zoey", "Francis", "Louis", "Nick", "Coach", "Ellis", "Rochelle"};

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
    this->_type = type;
    return;
}

Zombie* ZombieEvent::newZombie(std::string name) const {
	Zombie* zmb = new Zombie();
	zmb->setZombieName(name);
	zmb->setZombieType(_type);
	return zmb;
}

Zombie* ZombieEvent::randomChump(void) const {
    srand(time(NULL));
    Zombie* tmp = this->newZombie(_zombiesName[rand() % 8]);
    tmp->announce();
    return tmp;
}
