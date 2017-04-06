/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 19:15:17 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/06 22:20:33 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name, std::string log) : _name(name), _log(log) {
	std::cout << "CL4P-TR " << name <<  " Create Master ClapTrap" << std::endl;
	return;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "CL4P-TR " << this->_name << " :'Destroy Master ClapTrap'" << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	*this = src;
	return;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & rhs) {
	if (this != &rhs) {
		std::cout << "CL4P-TR " << this->_name << " copies the attributes of " << rhs._name;
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

void	ClapTrap::initTrap(void) {
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 10;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	this->_stoneAttackDamage = 5;
	this->_spoonAttackDamage = 99;
	this->_chainsawPlasmaDeathMortalAttackDamage = 6;
	this->_stabInTheBackAttackDamage = 21;
	this->_kamehamehaAttackDamage = 42;
}

void	ClapTrap::log(void) const {
	std::cout << this->_log << " ";
}

void	ClapTrap::rangedAttack(std::string const & target) const {
	log();
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " :'I can't fight if I'm dead... PLEASE FIX ME'" << std::endl;
	} else if (this->_energyPoints == 0) {
		std::cout << this->_name << " :'NO POWER STUPID'" << std::endl;
	} else {
		std::cout << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDamage << " points of damage !" << std::endl;
	}
	return;
}

void	ClapTrap::meleeAttack(std::string const & target) const {
	log();
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " :'I can't fight if I'm dead... PLEASE FIX ME'" << std::endl;
	} else if (this->_energyPoints == 0) {
		std::cout << this->_name << " :'NO POWER STUPID'" << std::endl;
	} else {
		std::cout << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
	}
	return;
}

void	ClapTrap::stoneAttack(std::string const & target) const {
	log();
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " :'I can't fight if I'm dead... PLEASE FIX ME'" << std::endl;
	} else if (this->_energyPoints == 0) {
		std::cout << this->_name << " :'NO POWER STUPID'" << std::endl;
	} else {
		std::cout << this->_name << " attacks " << target << " with a stone, causing " << this->_stoneAttackDamage << " points of damage !" << std::endl;
	}
	return;
}

void	ClapTrap::spoonAttack(std::string const & target) const {
	log();
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " :'I can't fight if I'm dead... PLEASE FIX ME'" << std::endl;
	} else if (this->_energyPoints == 0) {
		std::cout << this->_name << " :'NO POWER STUPID'" << std::endl;
	} else {
		std::cout << this->_name << " attacks " << target << " with a spoon, causing " << this->_spoonAttackDamage << " points of damage !" << std::endl;
	}
	return;
}

void	ClapTrap::chainsawPlasmaDeathMortalAttack(std::string const & target) const {
	log();
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " :'I can't fight if I'm dead... PLEASE FIX ME'" << std::endl;
	} else if (this->_energyPoints == 0) {
		std::cout << this->_name << " :'NO POWER STUPID'" << std::endl;
	} else {
		std::cout << this->_name << " attacks " << target << " with a chainsawPlasmaDeathMortal, causing " << this->_chainsawPlasmaDeathMortalAttackDamage << " points of damage !" << std::endl;
	}
	return;
}

void	ClapTrap::stabInTheBackAttack(std::string const & target) const {
	log();
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " :'I can't fight if I'm dead... PLEASE FIX ME'" << std::endl;
	} else if (this->_energyPoints == 0) {
		std::cout << this->_name << " :'NO POWER STUPID'" << std::endl;
	} else {
		std::cout << this->_name << " stab in the back " << target << ", causing " << this->_stabInTheBackAttackDamage << " points of damage !" << std::endl;
	}
	return;
}

void	ClapTrap::kamehamehaAttack(std::string const & target) const {
	log();
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " :'I can't fight if I'm dead... PLEASE FIX ME'" << std::endl;
	} else if (this->_energyPoints == 0) {
		std::cout << this->_name << " :'NO POWER STUPID'" << std::endl;
	} else {
		std::cout << this->_name << " calls Goku and he does a kamehameha on " << target << ", causing " << this->_kamehamehaAttackDamage << " points of damage !" << std::endl;
	}
	return;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	log();
	if (this->_hitPoints > 0) {
		if (amount < this->_armorDamageReduction) {
			std::cout << this->_name << " takes " << amount << " damages, new life is " << this->_hitPoints << " !" << std::endl;
		} else {
			unsigned int newAmount = amount - this->_armorDamageReduction;
			if (newAmount >= this->_hitPoints)
				this->_hitPoints = 0;
		 	else
				this->_hitPoints -= newAmount;
			std::cout << this->_name << " takes only " << newAmount << " damages because he blocks " << this->_armorDamageReduction << " with his superArmorDamageReduction, new life is " << this->_hitPoints << " !" << std::endl;
			if (this->_hitPoints == 0)
				std::cout << this->_name << " is dead, but he fought well." << std::endl;
		}
	} else {
		std::cout << this->_name << " is still dead." << std::endl;
	}
	return;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	log();
	if (this->_hitPoints + amount >= 100) {
		this->_hitPoints = this->_maxHitPoints;
		std::cout << this->_name << " repairs all my beautiful body and his new life is 100 !" << std::endl;
	} else {
		this->_hitPoints += amount;
		std::cout << this->_name << " repairs " << amount << ", new life is " << this->_hitPoints << " !" << std::endl;
	}
	return;
}
