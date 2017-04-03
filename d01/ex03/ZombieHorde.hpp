/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 14:47:10 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/03 16:02:04 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H
# include <iostream>
# include "Zombie.hpp"

class ZombieHorde {
	public:
		ZombieHorde(int n);
		~ZombieHorde(void);

        void ZombieHordeAnnounce(void);
        
		Zombie *zombieHorde;
        int nbHorde;
        static std::string zombiesName[20];
};

#endif
