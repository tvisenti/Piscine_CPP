/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 16:47:36 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/06 23:19:59 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, "SC4V-TP") {
	this->initTrap();
	this->log();
	std::cout << name <<  " :'This time it'll be awesome, I promise!'" << std::endl;
	return;
}

ScavTrap::~ScavTrap(void) {
	this->log();
	std::cout << this->_name << " :'I'll stop talking when I'm dead! Oops I'm dead!'" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src) {
	*this = src;
	return;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & rhs) {
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

void	ScavTrap::initTrap(void) {
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

void	ScavTrap::challengeNewcomer(std::string const & target) {
	this->log();
	std::string array[5] = {"Look at me! I'm dancing! I'm dancing! Can you do that?", "Can't you wait 2 seconds?", "Let's do a Rock - Paper - Scissors", "Spell my name backwards", "Kiss my wheel"};
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " :'I can't challenge if I'm dead... PLEASE FIX ME'" << std::endl;
	} else {
		std::string	toPrint = array[rand() % 5];
		std::cout << this->_name << " challenges the famous " << target << " to do : '" << toPrint << "'!" << std::endl;
	}
	return;
}

void	ScavTrap::log(void) const {
	std::cout << "SC4V-TP ";
	return;
}
