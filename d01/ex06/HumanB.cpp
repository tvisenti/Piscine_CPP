/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 18:15:49 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/04 18:41:36 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	std::cout << "HumanB is created and he's called " << name << std::endl;
	this->name = name;
	return;
}

HumanB::~HumanB(void) {
	std::cout << "HumanB is destroyed" << std::endl;
	return;
}

void	HumanB::attack() {
	std::cout << this->name << " attacks with his " << this->weapon->type << std::endl;
	return;
}

void	HumanB::setWeapon(Weapon &weapon) {
	std::cout << "SetWeapon: " << weapon.type << std::endl;
	this->weapon = &weapon;
	return;
}
