/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 09:13:50 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 21:21:33 by tvisenti         ###   ########.fr       */
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

FragTrap::FragTrap(FragTrap const & src) :  ClapTrap(src) {
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
	this->_hitPoints = this->s_hitPoints;
	this->_maxHitPoints = this->s_maxHitPoints;
	this->_energyPoints = this->s_energyPoints;
	this->_maxEnergyPoints = this->s_maxEnergyPoints;
	this->_level = this->s_level;
	this->_meleeAttackDamage = this->s_meleeAttackDamage;
	this->_rangedAttackDamage = this->s_rangedAttackDamage;
	this->_armorDamageReduction = this->s_armorDamageReduction;
	this->_stoneAttackDamage = this->s_stoneAttackDamage;
	this->_spoonAttackDamage = this->s_spoonAttackDamage;
	this->_chainsawPlasmaDeathMortalAttackDamage = this->s_chainsawPlasmaDeathMortalAttackDamage;
	this->_stabInTheBackAttackDamage = this->s_stabInTheBackAttackDamage;
	this->_kamehamehaAttackDamage = this->s_kamehamehaAttackDamage;
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
			void	(ClapTrap::*array[5])(std::string const & target) const = {&ClapTrap::stoneAttack, &ClapTrap::spoonAttack,
			&ClapTrap::chainsawPlasmaDeathMortalAttack, &ClapTrap::stabInTheBackAttack, &ClapTrap::kamehamehaAttack};
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
