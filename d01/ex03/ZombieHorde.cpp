/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 14:47:13 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/05 13:50:26 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

std::string ZombieHorde::_zombiesName[20] = {"Bill", "Zoey", "Francis", "Louis", "Nick", "Coach", "Ellis", "Rochelle", "Tank", "Boomer", "Smoker", "Witch", "Hunter", "Jockey", "Charger", "Spitter", "Common Infected", "Witch crys", "Screamer", "Uncommon Infected"};

ZombieHorde::ZombieHorde(int n) : _nbHorde(n) {
    this->_zombieHorde = new Zombie[n];

	srand(time(NULL));
    for (int i = 0; i < n; i++) {
        this->_zombieHorde[i].setZombieName(_zombiesName[rand() % 20]);
    }
    return;
}

ZombieHorde::~ZombieHorde(void) {
    delete [] this->_zombieHorde;
    std::cout << "ZombieHorde is destroyed" << std::endl;
    return;
}

void    ZombieHorde::ZombieHordeAnnounce(void) const {
    for (int i = 0; i < 20; i++) {
        this->_zombieHorde[i].announce();
    }
}
