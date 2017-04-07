/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:36:20 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 17:31:48 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

int		main() {
	// AWeapon wep("Test", 12, 12);
	// std::cout << wep.getDamage() << " damage for " << wep.getName() << std::endl;

	AWeapon* pr = new PlasmaRifle();
	pr->attack();


	// Character* zaz = new Character("zaz");
	//
	// std::cout << *zaz;
	//
	// Enemy* b = new RadScorpion();
	//
	// AWeapon* pf = new PowerFist();
	//
	// zaz->equip(pr);
	// std::cout << *zaz;
	// zaz->equip(pf);
	//
	// zaz->attack(b);
	// std::cout << *zaz;
	// zaz->equip(pr);
	// std::cout << *zaz;
	// zaz->attack(b);
	// std::cout << *zaz;
	// zaz->attack(b);
	// std::cout << *zaz;

	return 0;
}
