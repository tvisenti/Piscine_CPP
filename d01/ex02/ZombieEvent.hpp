/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 09:18:16 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/05 13:31:37 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"

class ZombieEvent {
	public:
		ZombieEvent(void);
		~ZombieEvent(void);

        void	setZombieType(std::string type);
        Zombie*	newZombie(std::string name) const;
        Zombie*	randomChump(void) const;

	private:
        static std::string	_zombiesName[8];
        std::string 		_type;
};

#endif
