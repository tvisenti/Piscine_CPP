/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 16:05:13 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/05 11:15:49 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name) : name(name) {
    std::cout << "Create Pony: " << name << std::endl;
    return;
}

Pony::~Pony(void) {
    std::cout << "Destruction Pony: " << this->name << std::endl;
    return;
}

void	Pony::anyAction(void) const {
	std::cout << this->name << " eats grass" << std::endl;
	return;
}

void		Pony::setPonyName(std::string name) {
	this->name = name;
	return;
}

std::string	Pony::getPonyName(void) const {
	return this->name;
}
