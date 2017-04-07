/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 09:13:44 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 21:00:45 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int		main() {
	srand(time(NULL));

	FragTrap	frag("Jack");
	ScavTrap	scav("Beauregard");

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
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.meleeAttack("enemy");

	std::cout << std::endl << "-- Instantiate ClapTrap" << std::endl;
	ClapTrap	clap("Clapy");

	std::cout << std::endl << "-- Instantiate NinjaTrap" << std::endl;
	NinjaTrap	ninja("HanRiz");

	std::cout << std::endl << "-- Tests for NinjaTrap" << std::endl;
	ninja.meleeAttack("enemy");
	ninja.rangedAttack("enemy");
	ninja.takeDamage(30);
	ninja.takeDamage(30);
	ninja.takeDamage(30);
	ninja.takeDamage(30);
	ninja.takeDamage(30);
	ninja.beRepaired(40);
	ninja.beRepaired(100);
	std::cout << "--- For clap == Clapy" << std::endl;
	ninja.ninjaShoebox(clap);
	std::cout << "--- For frag == Jack" << std::endl;
	ninja.ninjaShoebox(frag);
	std::cout << "--- For scav == Beauregard" << std::endl;
	ninja.ninjaShoebox(scav);
	std::cout << "--- For ninja == HanRiz" << std::endl;
	ninja.ninjaShoebox(ninja);
	return (0);
}
