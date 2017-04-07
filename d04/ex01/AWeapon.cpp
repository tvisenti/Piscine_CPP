/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:31:57 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 17:26:29 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage) {
    return;
}

AWeapon::AWeapon(AWeapon const &src) {
    *this = src;
    return;
}

AWeapon::~AWeapon(void) {
    return;
}

AWeapon &AWeapon::operator=(AWeapon const &rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_damage = rhs._damage;
		this->_apcost = rhs._apcost;
	}
    return *this;
}

std::string	const AWeapon::getName() const {
	return this->_name;
}

int		AWeapon::getAPCost() const {
	return this->_apcost;
}

int		AWeapon::getDamage() const {
	return this->_damage;
}
