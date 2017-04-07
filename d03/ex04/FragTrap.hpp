/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 09:13:48 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 11:37:17 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap  {
	public:
		FragTrap(std::string name);
		virtual ~FragTrap(void);
		FragTrap(FragTrap const & src);

		FragTrap&	operator=(FragTrap const & rhs);

		void	vaulthunter_dot_exe(std::string const & target);

	private:
		FragTrap(void);
		void	log(void) const;
		void	initTrap(void);

};

#endif