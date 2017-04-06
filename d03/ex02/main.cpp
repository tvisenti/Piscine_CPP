/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 09:13:44 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/06 20:33:59 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int		main() {
	srand(time(NULL));

	FragTrap *ftrap = new FragTrap("__Frag__");
    ftrap->meleeAttack("Jack");
    ftrap->rangedAttack("Joe");
    ftrap->takeDamage(30);
    ftrap->takeDamage(900);
	ftrap->takeDamage(1);
	ftrap->vaulthunter_dot_exe("Job");
	ftrap->beRepaired(20);
    ftrap->beRepaired(110);
    ftrap->vaulthunter_dot_exe("Jonas");
    ftrap->vaulthunter_dot_exe("Jacob");
	ftrap->vaulthunter_dot_exe("John");
	ftrap->vaulthunter_dot_exe("Joshua");
    ftrap->rangedAttack("Beauregard");

	ScavTrap *strap = new ScavTrap("__Scav__");
	strap->meleeAttack("Jack");
	strap->rangedAttack("Joe");
	strap->takeDamage(30);
	strap->takeDamage(900);
	strap->takeDamage(1);
	strap->challengeNewcomer("Job");
	strap->beRepaired(20);
	strap->beRepaired(110);
	strap->challengeNewcomer("Jonas");
	strap->challengeNewcomer("Jacob");
	strap->challengeNewcomer("John");
	strap->challengeNewcomer("Joshua");
	strap->rangedAttack("Beauregard");


    delete ftrap;
	delete strap;
	return(0);
}
