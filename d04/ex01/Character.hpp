/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:36:10 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 20:00:35 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {

	public:
		Character(std::string const & name);
	    Character(Character const &src);
	    ~Character(void);
	    Character &operator=(Character const &rhs);

		void	recoverAP();
		void	equip(AWeapon*);
		void	attack(Enemy*);
		std::string const getName(void) const;
		int		getApPoints(void) const;
		std::string		getCurrentWeapon(void) const;

	private:
		Character(void);

		std::string _name;
		int			_apPoints;
		AWeapon		*_weapon;


};

std::ostream&	operator<<(std::ostream &o, Character const & rhs);

#endif
