/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 16:47:36 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/06 19:05:26 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50),
_level(1), _name(name), _meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3),
_stoneAttackDamage(11), _spoonAttackDamage(98), _chainsawPlasmaDeathMortalAttackDamage(77), _stabInTheBackAttackDamage(42), _kamehamehaAttackDamage(21) {
	this->log();
	std::cout << name <<  " :'This time it'll be awesome, I promise!'" << std::endl;
	return;
}

ScavTrap::~ScavTrap(void) {
	this->log();
	std::cout << this->_name << " :'I'll stop talking when I'm dead! Oops I'm dead!'" << std::endl;
	return;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & rhs) {
	if (this != &rhs) {
		this->log();
		std::cout << this->_name << " copies the attributes of " << rhs._name;
		this->_hitPoints = rhs._hitPoints;
        this->_maxHitPoints = rhs._maxHitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_maxEnergyPoints = rhs._maxEnergyPoints;
        this->_level = rhs._level;
        this->_meleeAttackDamage = rhs._meleeAttackDamage;
        this->_rangedAttackDamage = rhs._rangedAttackDamage;
        this->_armorDamageReduction = rhs._armorDamageReduction;
	}
	return *this;
}

void	ScavTrap::rangedAttack(std::string const & target) const {
	this->log();
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " :'I can't fight if I'm dead... PLEASE FIX ME'" << std::endl;
	} else if (this->_energyPoints == 0) {
		std::cout << this->_name << " :'NO POWER STUPID'" << std::endl;
	} else {
		std::cout << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDamage << " points of damage !" << std::endl;
	}
	return;
}

void	ScavTrap::meleeAttack(std::string const & target) const {
	this->log();
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " :'I can't fight if I'm dead... PLEASE FIX ME'" << std::endl;
	} else if (this->_energyPoints == 0) {
		std::cout << this->_name << " :'NO POWER STUPID'" << std::endl;
	} else {
		std::cout << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
	}
	return;
}

void	ScavTrap::stoneAttack(std::string const & target) const {
	this->log();
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " :'I can't fight if I'm dead... PLEASE FIX ME'" << std::endl;
	} else if (this->_energyPoints == 0) {
		std::cout << this->_name << " :'NO POWER STUPID'" << std::endl;
	} else {
		std::cout << this->_name << " attacks " << target << " with a stone, causing " << this->_stoneAttackDamage << " points of damage !" << std::endl;
	}
	return;
}

void	ScavTrap::spoonAttack(std::string const & target) const {
	this->log();
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " :'I can't fight if I'm dead... PLEASE FIX ME'" << std::endl;
	} else if (this->_energyPoints == 0) {
		std::cout << this->_name << " :'NO POWER STUPID'" << std::endl;
	} else {
		std::cout << this->_name << " attacks " << target << " with a spoon, causing " << this->_spoonAttackDamage << " points of damage !" << std::endl;
	}
	return;
}

void	ScavTrap::chainsawPlasmaDeathMortalAttack(std::string const & target) const {
	this->log();
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " :'I can't fight if I'm dead... PLEASE FIX ME'" << std::endl;
	} else if (this->_energyPoints == 0) {
		std::cout << this->_name << " :'NO POWER STUPID'" << std::endl;
	} else {
		std::cout << this->_name << " attacks " << target << " with a chainsawPlasmaDeathMortal, causing " << this->_chainsawPlasmaDeathMortalAttackDamage << " points of damage !" << std::endl;
	}
	return;
}

void	ScavTrap::stabInTheBackAttack(std::string const & target) const {
	this->log();
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " :'I can't fight if I'm dead... PLEASE FIX ME'" << std::endl;
	} else if (this->_energyPoints == 0) {
		std::cout << this->_name << " :'NO POWER STUPID'" << std::endl;
	} else {
		std::cout << this->_name << " stab in the back " << target << ", causing " << this->_stabInTheBackAttackDamage << " points of damage !" << std::endl;
	}
	return;
}

void	ScavTrap::kamehamehaAttack(std::string const & target) const {
	this->log();
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " :'I can't fight if I'm dead... PLEASE FIX ME'" << std::endl;
	} else if (this->_energyPoints == 0) {
		std::cout << this->_name << " :'NO POWER STUPID'" << std::endl;
	} else {
		std::cout << this->_name << " calls Goku and he does a kamehameha on " << target << ", causing " << this->_kamehamehaAttackDamage << " points of damage !" << std::endl;
	}
	return;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	this->log();
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
			if (this->_hitPoints == 0) {
				this->log();
				std::cout << this->_name << " is dead, but he fought well." << std::endl;
			}
		}
	} else {
		std::cout << this->_name << " is still dead." << std::endl;
	}
	return;
}

void	ScavTrap::beRepaired(unsigned int amount) {
	this->log();
	if (this->_hitPoints + amount >= 100) {
		this->_hitPoints = this->_maxHitPoints;
		std::cout << this->_name << " repairs all my beautiful body and his new life is 100 !" << std::endl;
	} else {
		this->_hitPoints += amount;
		std::cout << this->_name << " repairs " << amount << ", new life is " << this->_hitPoints << " !" << std::endl;
	}
	return;
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
