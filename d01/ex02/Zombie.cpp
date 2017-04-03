/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 09:18:00 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/03 09:18:02 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(char *name, char *type) {

	this->name = name;
    std::cout << "<" << name  << " ("<< type << ") Braiiiiiinnnnssss" << std::endl;
    return;
}

Zombie::~Zombie(void) {

    std::cout << "Destroyed" << std::endl;
    return;
}
