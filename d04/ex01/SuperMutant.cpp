/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:35:17 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 20:36:42 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant"), _hp(170), _type("Super Mutant") {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
    return;
}

SuperMutant::SuperMutant(SuperMutant const &src) : Enemy(src) {
    *this = src;
    return;
}

SuperMutant::~SuperMutant(void) {
	std::cout << "" << std::endl;
    return;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &rhs) {
    if (this != &rhs) {
		this->_hp = rhs._hp;
		this->_type = rhs._type;
    }
    return *this;
}

void	SuperMutant::takeDamage(int i) {
	int	amount = i <= 3 ? amount = 0 : amount = i - 3;
	std::cout << this->_hp << std::endl;
	std::cout << amount << std::endl;
	if (this->_hp == 0) {
		std::cout << "ZZZzzz, Super Mutant is already dead!!!" << std::endl;
	} else if (this->_hp <= amount) {
		this->_hp = 0;
		std::cout << "Aaargh ..." << std::endl;
	} else {
		this->_hp -= amount;
		std::cout << "Ouch Super Mutant's wounded, new hp: " << this->_hp << std::endl;
	}
}
