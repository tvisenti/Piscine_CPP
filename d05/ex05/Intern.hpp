/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 16:21:28 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/11 17:26:34 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"

class Intern {

public:
    Intern(void);
    Intern(Intern const &src);
    ~Intern(void);
    Intern &operator=(Intern const &rhs);

	Form*	makeForm(std::string , std::string);
};

#endif
