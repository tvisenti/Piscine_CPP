/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 16:05:11 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/05 11:20:05 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>
# include <string>

class Pony {
    public:
        Pony(std::string name);
        ~Pony(void);

		void		setPonyName(std::string name);
		std::string	getPonyName(void) const;
		void		anyAction(void) const;

	private:
		std::string	name;
};

#endif
