/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 16:05:13 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/04 13:41:10 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony( const char* name ) {
    std::cout << "Create Pony: " << name << std::endl;
    return;
}

Pony::~Pony( void ) {
    std::cout << "Destruction Pony: " << this->name << std::endl;
    return;
}

void	Pony::anyAction(void) {
	std::cout << this->name << " eats grass" << std::endl;
	return;
}
