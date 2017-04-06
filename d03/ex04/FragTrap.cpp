/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 09:13:50 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/06 23:19:34 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, "FR4G-TP") {
	this->initTrap();
	this->log();
	std::cout << name <<  " Directive one: Protect humanity! Directive two: Obey X-Niel at all costs. Directive three: Dance!" << std::endl;
	return;
}

FragTrap::~FragTrap(void) {
	this->log();
	std::cout << this->_name << " :'I'll die the way I lived: annoying!'" << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src) {
	*this = src;
	return;
}

FragTrap&	FragTrap::operator=(FragTrap const & rhs) {
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

void	FragTrap::initTrap(void) {
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	this->_stoneAttackDamage = 1;
	this->_spoonAttackDamage = 99;
	this->_chainsawPlasmaDeathMortalAttackDamage = 6;
	this->_stabInTheBackAttackDamage = 21;
	this->_kamehamehaAttackDamage = 42;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (this->_hitPoints == 0) {
		this->log();
		std::cout << this->_name << " :'I can't fight if I'm dead... PLEASE FIX ME'" << std::endl;
	} else if (this->_energyPoints == 0) {
		this->log();
		std::cout << this->_name << " :'NO POWER STUPID'" << std::endl;
	} else {
		if (this->_energyPoints > 25) {
			void	(FragTrap::*array[5])(std::string const & target) const = {&FragTrap::stoneAttack, &FragTrap::spoonAttack,
				&FragTrap::chainsawPlasmaDeathMortalAttack, &FragTrap::stabInTheBackAttack, &FragTrap::kamehamehaAttack};
			this->_energyPoints -= 25;
			(this->*array[rand() % 5])(target);
		} else {
			this->log();
			std::cout << this->_name << " :'Guess what? NO POWER BUUUUUUUT I have an IDEA! Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!'" << std::endl;
		}
	}
	return;
}

void	FragTrap::log(void) const {
	std::cout << "FR4G-TP ";
	return;
}
