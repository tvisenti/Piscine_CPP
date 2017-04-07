/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:34:14 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 18:20:20 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 21, 5) {
    return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src) : AWeapon(src) {
    *this = src;
    return;
}

PlasmaRifle::~PlasmaRifle(void) {
    return;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &rhs) {
    if (this != &rhs) {

    }
    return *this;
}

void	PlasmaRifle::attack(void) const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return;
}
