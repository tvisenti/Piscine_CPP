/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 09:18:00 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/05 18:18:17 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : _name("DefaultName"), _type("DefaultType") {
	std::cout << "Zombie is created" << std::endl;
    return;
}

Zombie::~Zombie(void) {
    std::cout << this->_name << " is destroyed" << std::endl;
    return;
}

void	Zombie::announce(void) const {
	std::cout << "<" << this->_name  << " ("<< this->_type << ")> give me more braiiiiiiinnnssss..." << std::endl;
}

std::string	Zombie::getZombieName(void) {
	return (this->_name);
}

std::string	Zombie::getZombieType(void) {
	return (this->_type);
}

void		Zombie::setZombieName(std::string name) {
	this->_name = name;
}

void		Zombie::setZombieType(std::string type) {
	this->_type = type;
}
