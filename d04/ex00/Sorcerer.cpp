/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 14:05:50 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 16:17:15 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << name << ", " << title << ", is born !" << std::endl;
    return;
}

Sorcerer::Sorcerer(Sorcerer const &src) {
    *this = src;
    return;
}

Sorcerer::~Sorcerer(void) {
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
	return;
}

Sorcerer	&Sorcerer::operator=(Sorcerer const &rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_title = rhs._title;
	}
    return *this;
}

std::string	Sorcerer::introduce(void) const {
	return ("I am " + this->_name + ", " + this->_title + ", and I like ponies !\n");
}

std::ostream&	operator<<(std::ostream &o, Sorcerer const & rhs) {
	o << rhs.introduce();
	return o;
}

void	Sorcerer::polymorph(Victim const & victim) const {
	victim.getPolymorphed();
	return;
}
