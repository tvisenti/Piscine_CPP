/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 09:13:44 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 21:08:39 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int		main() {
	srand(time(NULL));

	FragTrap	frag("Jack");
	ScavTrap	scav("Beauregard");
	ClapTrap	clap("Clap", "Trap");

	std::cout << std::endl << "-- Tests for FragTrap" << std::endl;
	frag.meleeAttack("enemy");
	frag.rangedAttack("enemy");
	frag.takeDamage(30);
	frag.takeDamage(30);
	frag.takeDamage(30);
	frag.takeDamage(30);
	frag.takeDamage(30);
	frag.beRepaired(40);
	frag.beRepaired(100);
	frag.vaulthunter_dot_exe("enemy");
	frag.vaulthunter_dot_exe("enemy");
	frag.vaulthunter_dot_exe("enemy");
	frag.vaulthunter_dot_exe("enemy");
	frag.vaulthunter_dot_exe("enemy");
	frag.meleeAttack("enemy");

	std::cout << std::endl << "-- Tests for ScavTrap" << std::endl;
	scav.meleeAttack("enemy");
	scav.rangedAttack("enemy");
	scav.takeDamage(30);
	scav.takeDamage(30);
	scav.takeDamage(30);
	scav.takeDamage(30);
	scav.takeDamage(30);
	scav.beRepaired(40);
	scav.beRepaired(100);
	scav.challengeNewcomer("Jean");
	scav.challengeNewcomer("Job");
	scav.challengeNewcomer("Joshua");
	scav.challengeNewcomer("John");
	scav.challengeNewcomer("Jeff");
	scav.meleeAttack("enemy");
	return 0;
}
