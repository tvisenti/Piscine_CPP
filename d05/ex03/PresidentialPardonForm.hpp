/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 11:36:04 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/11 15:38:39 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form {

public:
    PresidentialPardonForm(std::string);
    PresidentialPardonForm(PresidentialPardonForm const &src);
    ~PresidentialPardonForm(void);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

	std::string		getTarget(void) const;

	void			execute(Bureaucrat const & executor) const;

private:
	PresidentialPardonForm(void);

	std::string	_target;
};

#endif
