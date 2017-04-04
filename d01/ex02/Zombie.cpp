/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 09:18:00 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/04 15:03:52 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : name("DefaultName"), type("DefaultType") {
	std::cout << "Zombie is created" << std::endl;
    return;
}

Zombie::~Zombie(void) {
    std::cout << this->name << " is destroyed" << std::endl;
    return;
}

void Zombie::announce(void) {
	std::cout << "<" << this->name  << " ("<< this->type << ")> give me more braiiiiiiinnnssss..." << std::endl;
}
