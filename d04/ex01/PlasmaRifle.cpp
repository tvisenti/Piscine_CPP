/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:34:14 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 17:38:11 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 21, 5), _name("Plasma Rifle"), _apcost(21), _damage(5) {
    return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src) : AWeapon(src) {
    *this = src;
    return;
}

PlasmaRifle::~PlasmaRifle(void) {
    return;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &rhs) {
    if (this != &rhs) {
		this->_name = rhs._name;
		this->_apcost = rhs._apcost;
		this->_damage = rhs._damage;
    }
    return *this;
}

void	PlasmaRifle::attack(void) const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return;
}
