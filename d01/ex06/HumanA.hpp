/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 18:15:33 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/03 19:10:28 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H
# include <iostream>
# include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon weapon);
		~HumanA(void);

		void	attack(void);

		std::string	name;
		Weapon	weapon;
};

#endif
