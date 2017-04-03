/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 09:17:51 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/03 16:04:45 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int	main() {
	ZombieHorde *horde = new ZombieHorde(20);
	horde->ZombieHordeAnnounce();
	delete horde;
	return (0);
}
