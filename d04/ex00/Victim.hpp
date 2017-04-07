/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 14:06:22 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 16:19:55 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>

class Victim {

public:
    Victim(std::string name);
    Victim(Victim const &src);
    ~Victim(void);
    Victim &operator=(Victim const &rhs);

	std::string	introduce(void) const;
	virtual void	getPolymorphed(void) const;

protected:
	Victim(void);

private:
	std::string	_name;

};

std::ostream&	operator<<(std::ostream &o, Victim const & rhs);

#endif
