/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:34:39 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 18:20:26 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 50, 8) {
    return;
}

PowerFist::PowerFist(PowerFist const &src) : AWeapon(src) {
    *this = src;
    return;
}

PowerFist::~PowerFist(void) {
    return;
}

PowerFist &PowerFist::operator=(PowerFist const &rhs) {
    if (this != &rhs) {

    }
    return *this;
}

void	PowerFist::attack(void) const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return;
}
