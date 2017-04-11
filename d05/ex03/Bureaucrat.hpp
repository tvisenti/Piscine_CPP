/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 08:30:46 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/11 15:09:38 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat {
public:
	class GradeTooHighException : public std::exception {
		public:
			GradeTooHighException();
			~GradeTooHighException() throw();
			GradeTooHighException(const GradeTooHighException& src);
			GradeTooHighException&	operator=(const GradeTooHighException& rhs);
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			GradeTooLowException();
			~GradeTooLowException() throw();
			GradeTooLowException(const GradeTooLowException& src);
			GradeTooLowException& operator=(const GradeTooLowException& rhs);
			const char* what() const throw();
	};

	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat(void);
	Bureaucrat &operator=(Bureaucrat const &rhs);

	std::string	getName() const;
	int			getGrade() const;
	void		incrementGrade();
	void		decrementGrade();

	void		signForm(Form&);

	void		executeForm(Form const & form);

private:
	Bureaucrat(void);
	std::string	_name;
	int 		_grade;
};

std::ostream&	operator<<(std::ostream &o, Bureaucrat const & rhs);

#endif
