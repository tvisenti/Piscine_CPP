/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 17:08:01 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/04 15:56:16 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain is created" << std::endl;
	return;
}

Brain::~Brain(void) {
	std::cout << "Brain is destroyed" << std::endl;
	return;
}

std::string Brain::identify(void) const {
	std::stringstream address;
	address << this;
	std::cout << "Brain is identified" << std::endl;
	return (address.str());
}
