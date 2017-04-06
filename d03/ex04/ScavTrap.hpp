/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 16:47:34 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/06 23:16:54 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(ScavTrap const & src);

		ScavTrap&	operator=(ScavTrap const & rhs);

		void	challengeNewcomer(std::string const & target);

	private:
		ScavTrap(void);
		void	log(void) const;
		void	initTrap(void);

};

#endif
