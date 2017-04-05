/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 18:14:57 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/05 14:05:07 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	std::cout << "Weapon is created of type: " << type << std::endl;
	return;
}

Weapon::~Weapon(void) {
	std::cout << "Weapon is deleted of type " << this->_type << std::endl;
	return;
}

void	Weapon::setType(std::string type) {
	this->_type = type;
	return;
}

std::string	Weapon::getType(void) const {
	return (this->_type);
}
