/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 18:14:57 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/03 19:21:49 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->type = type;
	std::cout << "Weapon is created of type: " << type << std::endl;
	return;
}

Weapon::~Weapon(void) {
	return;
}

void	Weapon::setType(std::string type) {
	this->type = type;
	std::cout << "SetType: " << this->type << std::endl;
	return;
}

std::string	Weapon::getType(void) const {
	std::cout << "GetType: " << this->type << std::endl;
	return (this->type);
}
