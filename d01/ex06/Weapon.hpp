/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 18:15:06 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/03 18:50:57 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

class Weapon {
	public:
		Weapon(std::string type);
		~Weapon(void);

		std::string	getType(void) const;
		void		setType(std::string type);

		std::string	type;
};

#endif
