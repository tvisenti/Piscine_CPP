/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:34:53 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 18:42:34 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type) {
    return;
}

Enemy::Enemy(Enemy const &src) {
    *this = src;
    return;
}

Enemy::~Enemy(void) {
    return;
}

Enemy &Enemy::operator=(Enemy const &rhs) {
    if (this != &rhs) {
		this->_hp = rhs._hp;
		this->_type = rhs._type;
    }
    return *this;
}

std::string const Enemy::getType(void) const {
	return this->_type;
}

int		Enemy::getHP() const {
	return this->_hp;
}

void	Enemy::takeDamage(int amount) {
	if (this->_hp == 0) {
		std::cout << "The enemy is already dead ... Stop hurting a corpse, it's gross." << std::endl;
	} else if (this->_hp <= amount) {
		this->_hp = 0;
		std::cout << "You just kill the enemy ... Well done! :)" << std::endl;
	} else {
		this->_hp -= amount;
		std::cout << "The enemy is wounded, new hp: " << this->_hp << std::endl;
	}
}
