/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 14:06:34 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 16:19:49 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include <iostream>
# include "Victim.hpp"

class Peon : public Victim {

public:
    Peon(std::string name);
    Peon(Peon const &src);
    ~Peon(void);
    Peon &operator=(Peon const &rhs);

	std::string	introduce(void) const;
	void	getPolymorphed(void) const;

private:
	Peon(void);

	std::string	_name;

};

std::ostream&	operator<<(std::ostream &o, Peon const & rhs);

#endif
