/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 09:18:08 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/05 13:22:02 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {
	public:
		Zombie(void);
		~Zombie(void);

		void		announce() const;
		std::string	getZombieName(void);
		std::string	getZombieType(void);

		void		setZombieName(std::string name);
		void		setZombieType(std::string type);

	private:
		std::string	_type;
		std::string	_name;
};

#endif
