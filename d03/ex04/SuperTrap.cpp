/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 23:14:43 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 12:32:59 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name, "SP3R-TP"), NinjaTrap(name), FragTrap(name) {
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

SuperTrap::SuperTrap(SuperTrap const & src) : ClapTrap(src), NinjaTrap(src), FragTrap(src) {
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
	// this->_hitPoints = this->FragTrap::_hitPoints;
	// this->_maxHitPoints = this->FragTrap::_maxHitPoints;
	// this->_energyPoints = this->NinjaTrap::_energyPoints;
	// this->_maxEnergyPoints = this->NinjaTrap::_maxEnergyPoints;
	// this->_level = 1;
	// this->_meleeAttackDamage = this->NinjaTrap::_meleeAttackDamage;
	// this->_rangedAttackDamage = this->FragTrap::_rangedAttackDamage;
	// this->_armorDamageReduction = this->FragTrap::_armorDamageReduction;
	// this->_stoneAttackDamage = 7;
	// this->_spoonAttackDamage = 12;
	// this->_chainsawPlasmaDeathMortalAttackDamage = 4;
	// this->_stabInTheBackAttackDamage = 99;
	// this->_kamehamehaAttackDamage = 50;

	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	this->_stoneAttackDamage = 7;
	this->_spoonAttackDamage = 12;
	this->_chainsawPlasmaDeathMortalAttackDamage = 4;
	this->_stabInTheBackAttackDamage = 99;
	this->_kamehamehaAttackDamage = 50;

	std::cout << "_hitPoints, should be (100): " << this->_hitPoints << std::endl;
	std::cout << "_maxHitPoi, should be (100): " << this->_maxHitPoints << std::endl;
	std::cout << "_energyPoi, should be (120): " << this->_energyPoints << std::endl;
	std::cout << "_maxEnergy, should be (120): " << this->_maxEnergyPoints << std::endl;
	std::cout << "_level    , should be (  1): " << this->_level << std::endl;
	std::cout << "_meleeAtta, should be ( 60): " << this->_meleeAttackDamage << std::endl;
	std::cout << "_rangedAtt, should be ( 20): " << this->_rangedAttackDamage << std::endl;
	std::cout << "_armorDama, should be (  5): " << this->_armorDamageReduction << std::endl;
	std::cout << "_stoneAtta, should be (  7): " << this->_stoneAttackDamage << std::endl;
}

void	SuperTrap::log(void) const {
	std::cout << "SP3R-TP ";
	return;
}
