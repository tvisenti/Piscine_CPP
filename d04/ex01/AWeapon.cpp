/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:31:57 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 20:26:19 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int damage, int apcost) : _name(name), _apcost(apcost), _damage(damage) {
	// std::cout << "Name: " << name << ", apcost: " << apcost << ", damage: " << damage << std::endl;
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
		this->_apcost = rhs._apcost;
		this->_damage = rhs._damage;
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
