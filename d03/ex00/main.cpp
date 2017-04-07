/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 09:13:44 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 20:57:19 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main() {
	srand(time(NULL));

	FragTrap	robot("Jack");

	robot.meleeAttack("enemy");
	robot.rangedAttack("enemy");
	robot.takeDamage(30);
	robot.takeDamage(30);
	robot.takeDamage(30);
	robot.takeDamage(30);
	robot.takeDamage(30);
	robot.beRepaired(40);
	robot.beRepaired(100);
	robot.vaulthunter_dot_exe("enemy");
	robot.vaulthunter_dot_exe("enemy");
	robot.vaulthunter_dot_exe("enemy");
	robot.vaulthunter_dot_exe("enemy");
	robot.vaulthunter_dot_exe("enemy");
	robot.meleeAttack("enemy");
	return (0);
}
