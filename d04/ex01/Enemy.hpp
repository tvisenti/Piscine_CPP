/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:35:01 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 18:12:29 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>

class Enemy {

	public:
		Enemy(int hp, std::string const & type);
	    Enemy(Enemy const &src);
	    virtual ~Enemy(void);
	    Enemy &operator=(Enemy const &rhs);

		std::string const getType(void) const;
		int		getHP() const;
		virtual void	takeDamage(int);

	private:
		Enemy(void);
		int			_hp;
		std::string	_type;
};

#endif
