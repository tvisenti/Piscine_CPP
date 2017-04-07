/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 23:14:41 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 12:24:56 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include <iostream>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include "ClapTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap {
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
