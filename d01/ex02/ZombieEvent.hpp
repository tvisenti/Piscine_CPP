/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 09:18:16 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/03 14:26:51 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H
# include <iostream>
# include "Zombie.hpp"

class ZombieEvent {
	public:
		ZombieEvent(void);
		~ZombieEvent(void);

        void    setZombieType(std::string type);
        Zombie* newZombie(std::string name);
        Zombie* randomChump(void);

        static std::string zombiesName[8];
        std::string type;
};

#endif
