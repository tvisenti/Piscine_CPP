/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 09:13:44 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/06 19:01:49 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main() {
	srand(time(NULL));

	FragTrap *ftrap = new FragTrap("__Clap__");
	ScavTrap *strap = new ScavTrap("__Trap__");

    ftrap->meleeAttack("Jack");
	strap->meleeAttack("Jack");
    ftrap->rangedAttack("Joe");
	strap->rangedAttack("Joe");

    ftrap->takeDamage(30);
	strap->takeDamage(30);
    ftrap->takeDamage(900);
	strap->takeDamage(900);
	ftrap->takeDamage(1);
	strap->takeDamage(1);
	ftrap->vaulthunter_dot_exe("Job");
	strap->challengeNewcomer("Job");
	ftrap->beRepaired(20);
	strap->beRepaired(20);
    ftrap->beRepaired(110);
	strap->beRepaired(110);

    ftrap->vaulthunter_dot_exe("Jonas");
	strap->challengeNewcomer("Jonas");
    ftrap->vaulthunter_dot_exe("Jacob");
	strap->challengeNewcomer("Jacob");
	ftrap->vaulthunter_dot_exe("John");
	strap->challengeNewcomer("John");
	ftrap->vaulthunter_dot_exe("Joshua");
	strap->challengeNewcomer("Joshua");
    ftrap->rangedAttack("Beauregard");
	strap->rangedAttack("Beauregard");

    delete ftrap;
	delete strap;
	return(0);
}
