/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 14:06:13 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 16:17:11 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name) {
	std::cout << "Some random victim called " << name << " just popped !" << std::endl;
    return;
}

Victim::Victim(Victim const &src) {
    *this = src;
    return;
}

Victim::~Victim(void) {
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
    return;
}

Victim	&Victim::operator=(Victim const &rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
	}
    return *this;
}

std::string	Victim::introduce(void) const {
	return ("I am " + this->_name + " and I like otters !\n");
}

std::ostream&	operator<<(std::ostream &o, Victim const & rhs) {
	o << rhs.introduce();
	return o;
}

void	Victim::getPolymorphed(void) const {
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
	return;
}
