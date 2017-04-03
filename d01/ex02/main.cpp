/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 09:17:51 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/03 14:35:45 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main() {
	ZombieEvent* event = new ZombieEvent;
	event->setZombieType("tank");
	Zombie* zombie = event->newZombie("Joe");
	zombie->announce();

	event->setZombieType("random");
	Zombie* zombie2 = event->randomChump();

	delete event;
	delete zombie;
	delete zombie2;
	return (0);
}
