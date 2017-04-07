/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 21:51:33 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 11:37:24 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap {
	public:
		NinjaTrap(std::string name);
		virtual ~NinjaTrap(void);
		NinjaTrap(NinjaTrap const & src);

		NinjaTrap&	operator=(NinjaTrap const & rhs);

		void	ninjaShoebox(ClapTrap const & action) const;
		void	ninjaShoebox(FragTrap const & action) const;
		void	ninjaShoebox(ScavTrap const & action) const;
		void	ninjaShoebox(NinjaTrap const & action) const;

	private:
		NinjaTrap(void);
		void	log(void) const;
		void	initTrap(void);

};

#endif
