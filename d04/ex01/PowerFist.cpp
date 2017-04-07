/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:34:39 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 17:38:03 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 50, 8), _name("Power Fist"), _apcost(50), _damage(8) {
    return;
}

PowerFist::PowerFist(PowerFist const &src) : AWeapon(src) {
    *this = src;
    return;
}

PowerFist::~PowerFist(void) {
    return;
}

PowerFist &PowerFist::operator=(PowerFist const &rhs) {
    if (this != &rhs) {
		this->_name = rhs._name;
		this->_apcost = rhs._apcost;
		this->_damage = rhs._damage;
    }
    return *this;
}

void	PowerFist::attack(void) const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return;
}
