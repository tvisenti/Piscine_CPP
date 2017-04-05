/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 17:07:56 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/05 13:52:13 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {
	std::cout << "Human is created" << std::endl;
	return;
}

Human::~Human(void) {
	std::cout << "Human is destroyed" << std::endl;
	return;
}

const Brain	&Human::getBrain(void) const {
	return (this->brain);
}

std::string Human::identify(void) const {
	return (this->brain.identify());
}
