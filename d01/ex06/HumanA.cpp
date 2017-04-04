/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 18:15:25 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/04 18:24:43 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {
	std::cout << "HumanA is created and he's called " << name << std::endl;
	return;
}

HumanA::~HumanA(void) {
	std::cout << "HumanA is destroyed" << std::endl;
	return;
}

void	HumanA::attack() {
	std::cout << this->name << " attacks with his " << this->weapon.type << std::endl;
	return;
}
