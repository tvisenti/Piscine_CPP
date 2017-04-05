/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 17:07:54 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/05 13:54:28 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"

class Human {
	public:
		Human(void);
		~Human(void);

		const Brain	&getBrain(void) const;
		std::string	identify(void) const;
		
	private:
		const Brain brain;
};

#endif
