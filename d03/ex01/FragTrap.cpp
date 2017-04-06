/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 09:13:50 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/06 17:50:31 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
_level(1), _name(name), _meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5),
_stoneAttackDamage(1), _spoonAttackDamage(99), _chainsawPlasmaDeathMortalAttackDamage(6), _stabInTheBackAttackDamage(21), _kamehamehaAttackDamage(42) {
	this->log();
	std::cout << name <<  " Directive one: Protect humanity! Directive two: Obey X-Niel at all costs. Directive three: Dance!" << std::endl;
	return;
}

FragTrap::~FragTrap(void) {
	this->log();
	std::cout << this->_name << " :'I'll die the way I lived: annoying!'" << std::endl;
	return;
}

FragTrap&	FragTrap::operator=(FragTrap const & rhs) {
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

void	FragTrap::rangedAttack(std::string const & target) const {
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

void	FragTrap::meleeAttack(std::string const & target) const {
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

void	FragTrap::stoneAttack(std::string const & target) const {
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

void	FragTrap::spoonAttack(std::string const & target) const {
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

void	FragTrap::chainsawPlasmaDeathMortalAttack(std::string const & target) const {
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

void	FragTrap::stabInTheBackAttack(std::string const & target) const {
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

void	FragTrap::kamehamehaAttack(std::string const & target) const {
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

void	FragTrap::takeDamage(unsigned int amount) {
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

void	FragTrap::beRepaired(unsigned int amount) {
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
