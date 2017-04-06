/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 21:51:21 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/06 23:29:51 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, "NI4J-TP") {
	this->initTrap();
	this->log();
	std::cout << name <<  " :'Hi guys, it's me Mar... nooooo I'm a ninja yo.'" << std::endl;
	return;
}

NinjaTrap::~NinjaTrap(void) {
	this->log();
	std::cout << this->_name << " :'Rěnzhě shì sǐ / Ninja is dead.'" << std::endl;
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

void	NinjaTrap::ninjaShoebox(ClapTrap const & action) const {
	this->log();
	std::cout << this->_name << " :'Nobody hurts my friends, " << action.getClapName() << "'!" << std::endl;
	return;
}

void	NinjaTrap::ninjaShoebox(FragTrap const & action) const {
	this->log();
	std::cout << this->_name << " :'Here I come to save the day with you, " << action.getClapName() << "'!" << std::endl;
	return;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const & action) const {
	this->log();
	std::cout << this->_name << " :'Just point me in the right direction, " << action.getClapName() << "'!" << std::endl;
	return;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const & action) const {
	this->log();
	std::cout << this->_name << " :'Have no fear, mini-trap is here look, " << action.getClapName() << "'!" << std::endl;
	return;
}

void	NinjaTrap::log(void) const {
	std::cout << "NI4J-TP ";
	return;
}
