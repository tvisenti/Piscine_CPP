/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:35:45 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 20:38:14 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public virtual Enemy {

	public:
	    RadScorpion(void);
	    RadScorpion(RadScorpion const &src);
	    ~RadScorpion(void);
	    RadScorpion &operator=(RadScorpion const &rhs);

		void	takeDamage(int amount);

	private:
		int			_hp;
		std::string	_type;
};

#endif
