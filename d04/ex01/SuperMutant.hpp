/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:35:26 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 18:34:55 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public virtual Enemy {

	public:
	    SuperMutant(void);
	    SuperMutant(SuperMutant const &src);
	    ~SuperMutant(void);
	    SuperMutant &operator=(SuperMutant const &rhs);

		void	takeDamage(int);

	private:
		int			_hp;
		std::string	_type;
};

#endif
