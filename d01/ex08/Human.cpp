/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 17:08:41 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/05 08:34:00 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const & target) {
	std::cout << "meleeAttack" << std::endl;
	return;
}

void	Human::rangedAttack(std::string const & target) {
	std::cout << "rangedAttack" << std::endl;
	return;
}

void	Human::intimidatingShout(std::string const & target) {
	std::cout << "intimidatingShout" << std::endl;
	return;
}

void	Human::action(std::string const & action_name, std::string const & target) {
	void	(Human::*array[3])(std::string const & target) =
	{&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	std::string	cmp[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

	for (int i = 0; i < 3; i++) {
		if (cmp[i] == action_name) {
			this->(Human::*array[i])(target);
			return;
		}
	}
	return;
}
