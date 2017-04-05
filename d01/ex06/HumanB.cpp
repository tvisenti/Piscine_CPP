/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 18:15:49 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/05 14:03:33 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	std::cout << "HumanB is created and he's called " << name << std::endl;
	return;
}

HumanB::~HumanB(void) {
	std::cout << "HumanB is destroyed" << std::endl;
	return;
}

void	HumanB::attack() const {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	return;
}

void	HumanB::setWeapon(Weapon &weapon) {
	std::cout << "SetWeapon: " << weapon.getType() << std::endl;
	this->_weapon = &weapon;
	return;
}
