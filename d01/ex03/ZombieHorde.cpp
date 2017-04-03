/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 14:47:13 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/03 16:37:30 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"

std::string ZombieHorde::zombiesName[20] = {"Bill", "Zoey", "Francis", "Louis", "Nick", "Coach", "Ellis", "Rochelle", "Tank", "Boomer", "Smoker", "Witch", "Hunter", "Jockey", "Charger", "Spitter", "Common Infected", "Witch crys", "Screamer", "Uncommon Infected"};

ZombieHorde::ZombieHorde(int n) {
    this->nbHorde = n;
    this->zombieHorde = new Zombie[20];

    time_t rawtime;
    struct tm * timeinfo;
    char buffer [8];

    time (&rawtime);
    timeinfo = localtime (&rawtime);

    strftime (buffer, 8, "%S", timeinfo);
    srand(atoi(buffer));
    for (int i = 0; i < 20; i++) {
        this->zombieHorde[i].ZombieInit(zombiesName[rand() % 20]);
    }
    return;
}

ZombieHorde::~ZombieHorde(void) {
    delete [] this->zombieHorde;
    std::cout << "ZombieHorde is destroyed" << std::endl;
    return;
}

void    ZombieHorde::ZombieHordeAnnounce(void) {
    for (int i = 0; i < 20; i++) {
        this->zombieHorde[i].announce();
    }
}
