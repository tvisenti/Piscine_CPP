/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 09:13:44 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/06 15:48:39 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main() {
	srand(time(NULL));

	FragTrap *ftrap = new FragTrap("Clap Clap");

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

    delete ftrap;
	return(0);
}
