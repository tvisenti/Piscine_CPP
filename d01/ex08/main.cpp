/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 17:08:36 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/05 18:25:08 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main() {
	Human	human;

	human.action("meleeAttack", "First");
	human.action("Autres", "Second");
	human.action("rangedAttack", "Third");
	human.action("intimidatingShout", "First");
	return (0);
}
