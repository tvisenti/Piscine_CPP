/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 23:14:41 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/06 23:40:56 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : virtual public NinjaTrap, virtual public FragTrap {
	public:
		SuperTrap(std::string name);
		~SuperTrap(void);
		SuperTrap(SuperTrap const & src);

		SuperTrap&	operator=(SuperTrap const & rhs);

	private:
		SuperTrap(void);
		void	log(void) const;
		void	initTrap(void);

};

#endif
