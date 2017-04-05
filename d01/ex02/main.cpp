/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 09:17:51 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/05 13:26:09 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main() {
	ZombieEvent	event;
	Zombie		zombie;
	Zombie*		zombie2;

	event.setZombieType("tank");
	zombie.announce();

	event.setZombieType("random");
	zombie2 = event.randomChump();

	delete zombie2;
	return (0);
}
