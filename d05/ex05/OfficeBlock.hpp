/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 17:42:39 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/11 21:12:42 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include "Intern.hpp"

class OfficeBlock {

public:

	class SpecificException : public std::exception {
	public:
	    SpecificException(int);
	    SpecificException(SpecificException const &src);
	    ~SpecificException(void) throw();
	    SpecificException &operator=(SpecificException const &rhs);
		const char* what() const throw();
	private:
		int	_error;
	};

    OfficeBlock(void);
	OfficeBlock(Intern*, Bureaucrat*, Bureaucrat*);
    ~OfficeBlock(void);

	void	setIntern(Intern*);
	void	setSigner(Bureaucrat*);
	void	setExecutor(Bureaucrat*);

	Intern		*getIntern(void);
	Bureaucrat	*getSigner(void);
	Bureaucrat	*getExecutor(void);

	void	doBureaucracy(std::string name, std::string target) const;

private:
	OfficeBlock(OfficeBlock const &src);
	OfficeBlock &operator=(OfficeBlock const &rhs);

	Intern*		_intern;
	Bureaucrat*	_signer;
	Bureaucrat*	_executor;

};

#endif
