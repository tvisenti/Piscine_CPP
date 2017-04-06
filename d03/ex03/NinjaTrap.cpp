/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 21:51:21 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/06 22:20:42 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, "NI4J-TP"), _name(name) {
	this->initTrap();
	this->log();
	std::cout << name <<  " :'This time it'll be awesome, I promise!'" << std::endl;
	return;
}

NinjaTrap::~NinjaTrap(void) {
	this->log();
	std::cout << this->_name << " :'I'll stop talking when I'm dead! Oops I'm dead!'" << std::endl;
	return;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) : ClapTrap(src) {
	*this = src;
	return;
}

NinjaTrap&	NinjaTrap::operator=(NinjaTrap const & rhs) {
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

void	NinjaTrap::initTrap(void) {
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	this->_stoneAttackDamage = 88;
	this->_spoonAttackDamage = 12;
	this->_chainsawPlasmaDeathMortalAttackDamage = 1;
	this->_stabInTheBackAttackDamage = 99;
	this->_kamehamehaAttackDamage = 9;
}

void	NinjaTrap::ninjaShoebox(std::string const & target) {
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

void	NinjaTrap::log(void) const {
	std::cout << "SC4V-TP ";
	return;
}
