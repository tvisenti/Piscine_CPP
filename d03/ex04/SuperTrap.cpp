/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 23:14:43 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/06 23:49:36 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name) {
	this->initTrap();
	this->log();
	std::cout << name <<  " :'SP3R-TP is here.'" << std::endl;
	return;
}

SuperTrap::~SuperTrap(void) {
	this->log();
	std::cout << this->_name << " :'The robot is dead, long live the robot!'" << std::endl;
	return;
}

SuperTrap::SuperTrap(SuperTrap const & src) : FragTrap(src), NinjaTrap(src) {
	*this = src;
	return;
}

SuperTrap&	SuperTrap::operator=(SuperTrap const & rhs) {
	if (this != &rhs) {
		this->log();
		std::cout << this->_name << " copies the attributes of " << rhs._name;
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
        this->_maxHitPoints = rhs._maxHitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_maxEnergyPoints = rhs._maxEnergyPoints;
        this->_level = rhs._level;
        this->_meleeAttackDamage = rhs._meleeAttackDamage;
        this->_rangedAttackDamage = rhs._rangedAttackDamage;
        this->_armorDamageReduction = rhs._armorDamageReduction;
		this->_stoneAttackDamage = rhs._stoneAttackDamage;
		this->_spoonAttackDamage = rhs._spoonAttackDamage;
		this->_chainsawPlasmaDeathMortalAttackDamage = rhs._chainsawPlasmaDeathMortalAttackDamage;
		this->_stabInTheBackAttackDamage = rhs._stabInTheBackAttackDamage;
		this->_kamehamehaAttackDamage = rhs._kamehamehaAttackDamage;
	}
	return *this;
}

void	SuperTrap::initTrap(void) {
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	this->_stoneAttackDamage = 11;
	this->_spoonAttackDamage = 98;
	this->_chainsawPlasmaDeathMortalAttackDamage = 77;
	this->_stabInTheBackAttackDamage = 42;
	this->_kamehamehaAttackDamage = 21;
}

void	SuperTrap::log(void) const {
	std::cout << "SP3R-TP ";
	return;
}
