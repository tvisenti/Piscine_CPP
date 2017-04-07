/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 14:06:44 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 16:17:01 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name), _name(name) {
	std::cout << "Zog zog." << std::endl;
    return;
}

Peon::Peon(Peon const &src) : Victim(src) {
    *this = src;
    return;
}

Peon::~Peon(void) {
	std::cout << "Bleuark.." << std::endl;
    return;
}

Peon	&Peon::operator=(Peon const &rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
	}
    return *this;
}

std::string	Peon::introduce(void) const {
	return ("I am " + this->_name + " and I like otters !\n");
}

std::ostream&	operator<<(std::ostream &o, Peon const & rhs) {
	o << rhs.introduce();
	return o;
}

void	Peon::getPolymorphed(void) const {
	std::cout << this->_name << "  has been turned into a pink pony !" << std::endl;
	return;
}
