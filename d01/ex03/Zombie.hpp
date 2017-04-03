/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 09:18:08 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/03 15:41:56 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie {
	public:
		Zombie(std::string name, std::string type);
		Zombie(void);
		~Zombie(void);

		void ZombieInit(std::string name);
		void announce();
		std::string	type;
		std::string	name;
};

#endif
