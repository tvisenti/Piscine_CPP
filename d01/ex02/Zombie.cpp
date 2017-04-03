/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 09:18:00 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/03 13:42:11 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) {

	this->name = name;
	this->type = type;
	std::cout << this->name << " is created" << std::endl;
    return;
}

Zombie::~Zombie(void) {
    std::cout << this->name << " is destroyed" << std::endl;
    return;
}

void Zombie::announce(void) {
	std::cout << "<" << this->name  << " ("<< this->type << ")> give me more braiiiiiiinnnssss..." << std::endl;
}
