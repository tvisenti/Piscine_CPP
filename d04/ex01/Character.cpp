/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:36:02 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 20:31:18 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _name(name), _apPoints(40), _weapon(NULL) {
    return;
}

Character::Character(Character const &src) {
    *this = src;
    return;
}

Character::~Character(void) {
    return;
}

Character &Character::operator=(Character const &rhs) {
    if (this != &rhs) {
		this->_name = rhs._name;
		this->_apPoints = rhs._apPoints;
		this->_weapon = rhs._weapon;
    }
    return *this;
}

void	Character::recoverAP(void) {
	if (this->_apPoints <= 30) {
		this->_apPoints += 10;
	} else {
		this->_apPoints = 40;
	}
}

void	Character::equip(AWeapon* newWeapon) {
	if (this->_weapon == NULL) {
		std::cout << this->_name << " finds a new weapon and take it: " << newWeapon->getName() << std::endl;
	} else {
		std::cout << this->_name << " drops his old " << this->_weapon->getName() << " and takes a new weapon: " << newWeapon->getName() << std::endl;
	}
	this->_weapon = newWeapon;
}

void	Character::attack(Enemy* enemy) {
	if (this->_apPoints < this->_weapon->getAPCost()) {
		std::cout << "I can't attack, I don't have enough AP: " << this->_apPoints << std::endl;
	} else {
		this->_apPoints -= this->_weapon->getAPCost();
		std::cout << this->getName() << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
	}
	enemy->takeDamage(this->_weapon->getDamage());
	this->_weapon->attack();
}

std::string const	Character::getName(void) const {
	return (this->_name);
}

int		Character::getApPoints(void) const {
	return (this->_apPoints);
}

std::string		Character::getCurrentWeapon(void) const {
	if (this->_weapon == NULL)
		return (" and is unarmed\n");
	return (" and wields a " + this->_weapon->getName() + "\n");
}

std::ostream&	operator<<(std::ostream &o, Character const & rhs) {
	o << rhs.getName() << " has " << rhs.getApPoints() << " AP " << rhs.getCurrentWeapon();
	return o;
}
