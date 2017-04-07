/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:35:39 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 20:37:43 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "Rad Scorpion"), _hp(80), _type("Rad Scorpion") {
	std::cout << "* click click click *" << std::endl;
    return;
}

RadScorpion::RadScorpion(RadScorpion const &src) : Enemy(src) {
    *this = src;
    return;
}

RadScorpion::~RadScorpion(void) {
    return;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &rhs) {
    if (this != &rhs) {
		this->_hp = rhs._hp;
		this->_type = rhs._type;
    }
    return *this;
}

void	RadScorpion::takeDamage(int amount) {
	if (this->_hp == 0) {
		std::cout << "ZZZzzz, Rad Scorpion is already dead!!!" << std::endl;
	} else if (this->_hp <= amount) {
		this->_hp = 0;
		std::cout << "* SPROTCH *" << std::endl;
	} else {
		this->_hp -= amount;
		std::cout << "Ouch Rad Scorpion's wounded, new hp: " << this->_hp << std::endl;
	}
}
