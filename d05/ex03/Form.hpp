/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 08:31:35 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/11 15:44:17 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
	class GradeTooHighException : public std::exception {
	public:
	    GradeTooHighException(void);
	    GradeTooHighException(GradeTooHighException const &src);
	    virtual ~GradeTooHighException(void) throw();
	    GradeTooHighException &operator=(GradeTooHighException const &rhs);
		const char*	what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
	    GradeTooLowException(void);
	    GradeTooLowException(GradeTooLowException const &src);
	    virtual ~GradeTooLowException(void) throw();
	    GradeTooLowException &operator=(GradeTooLowException const &rhs);
		const char* what() const throw();
	};
	class FormIsNotSigned : public std::exception {
	public:
		FormIsNotSigned(void);
		FormIsNotSigned(FormIsNotSigned const &src);
		virtual ~FormIsNotSigned(void) throw();
		FormIsNotSigned &operator=(FormIsNotSigned const &rhs);
		const char* what() const throw();
	};

	Form(std::string, int, int);
    Form(Form const &src);
    virtual ~Form(void);
    Form &operator=(Form const &rhs);

	void				beSigned(Bureaucrat&);

	std::string			getName(void) const;
	int					getGradeSign(void) const;
	int					getGradeExec(void) const;
	bool				getSigned(void) const;

	virtual void		execute(Bureaucrat const & executor) const = 0;

private:
	Form(void);

	const std::string	_name;
	const int			_gradeSign;
	const int			_gradeExec;
	bool				_signed;
};

std::ostream&	operator<<(std::ostream &o, Form const & rhs);

#endif
