/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 18:15:57 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/03 19:26:46 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H
# include <iostream>
# include <sstream>
# include "weapon.hpp"
class HumanB {
	public:
		HumanB(std::string name);
		~HumanB(void);

		void	attack(void);

		std::string	name;
		Weapon	weapon;
};

#endif
