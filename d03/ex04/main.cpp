/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 09:13:44 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/06 23:06:52 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int		main() {
	srand(time(NULL));

	FragTrap ftrap("__Frag__");
    ftrap.meleeAttack("Jack");
    ftrap.rangedAttack("Joe");
    ftrap.takeDamage(30);
    ftrap.takeDamage(900);
	ftrap.takeDamage(1);
	ftrap.vaulthunter_dot_exe("Job");
	ftrap.beRepaired(20);
    ftrap.beRepaired(110);
    ftrap.vaulthunter_dot_exe("Jonas");
    ftrap.vaulthunter_dot_exe("Jacob");
	ftrap.vaulthunter_dot_exe("John");
	ftrap.vaulthunter_dot_exe("Joshua");
    ftrap.rangedAttack("Beauregard");

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

	ClapTrap clapT("__Clap__", "__Clap__");

	NinjaTrap ntrap("__Nijn__");
	ntrap.meleeAttack("Jack");
	ntrap.rangedAttack("Joe");
	ntrap.takeDamage(30);
	ntrap.takeDamage(900);
	ntrap.takeDamage(1);
	ntrap.ninjaShoebox(clapT);
	ntrap.beRepaired(20);
	ntrap.beRepaired(110);
	ntrap.ninjaShoebox(ftrap);
	ntrap.rangedAttack("Beauregard");

	delete strap;
	return(0);
}
