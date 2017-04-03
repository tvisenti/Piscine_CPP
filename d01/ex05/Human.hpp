/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 17:07:54 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/03 18:11:39 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H
# include <iostream>
# include <sstream>
# include "Brain.hpp"

class Human {
	public:
		Human(void);
		~Human(void);
		Brain brain;

		Brain&	getBrain(void);
		std::string	identify(void);
};

#endif
