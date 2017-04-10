#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

class Bureaucrat {

public:
	class GradeTooHighException : public std::exception {
		public:
			GradeTooHighException();
			virtual ~GradeTooHighException() throw();
			GradeTooHighException(const GradeTooHighException& src);
			GradeTooHighException&	operator=(const GradeTooHighException& rhs);
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			GradeTooLowException();
			virtual ~GradeTooLowException() throw();
			GradeTooLowException(const GradeTooLowException& src);
			GradeTooLowException& operator=(const GradeTooLowException& rhs);
			virtual const char* what() const throw();
	};

	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat(void);
	Bureaucrat &operator=(Bureaucrat const &rhs);

	std::string	getName() const;
	int			getGrade() const;
	void		incrementGrade();
	void		decrementGrade();

private:
	Bureaucrat(void);
	std::string	_name;
	int 		_grade;
};

std::ostream&	operator<<(std::ostream &o, Bureaucrat const & rhs);

#endif
