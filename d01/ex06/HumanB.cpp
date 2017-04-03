/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 18:15:49 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/03 19:26:00 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

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
