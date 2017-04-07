/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 14:03:47 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 15:24:37 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include "Victim.hpp"

class Sorcerer {

public:
    Sorcerer(std::string name, std::string title);
    Sorcerer(Sorcerer const &src);
    ~Sorcerer(void);
    Sorcerer &operator=(Sorcerer const &rhs);

	std::string	introduce(void) const;
 	void	polymorph(Victim const &) const;

private:
	Sorcerer(void);

	std::string	_name;
	std::string	_title;

};

std::ostream&	operator<<(std::ostream &o, Sorcerer const & rhs);

#endif
