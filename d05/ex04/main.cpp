/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 08:30:54 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/11 19:31:10 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "OfficeBlock.hpp"

int main()
{
	std::cout << "-------------------------------------" << std::endl;
	{
		Intern idiotOne;
		Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
		Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);

		OfficeBlock ob;

		ob.setIntern(&idiotOne);
		ob.setSigner(&bob);
		ob.setExecutor(&hermes);

		try {
			ob.doBureaucracy("ShrubberyCreation", "Pigley");
		}
		catch (OfficeBlock::SpecificException & e) {
			std::cout << e.what() << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "-------------------------------------" << std::endl;
	{
		Intern idiotOne;
		Bureaucrat hermes = Bureaucrat("Hermes Conrad", 70);
		Bureaucrat bob = Bureaucrat("Bobby Bobson", 68);

		OfficeBlock ob;

		ob.setIntern(&idiotOne);
		ob.setSigner(&bob);
		ob.setExecutor(&hermes);

		try {
			ob.doBureaucracy("RobotomyRequest", "Pigley");
		}
		catch (OfficeBlock::SpecificException & e) {
			std::cout << e.what() << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "-------------------------------------" << std::endl;
	{
		Intern idiotOne;
		Bureaucrat hermes = Bureaucrat("Hermes Conrad", 149);
		Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);

		OfficeBlock ob;

		ob.setIntern(&idiotOne);
		ob.setSigner(&bob);
		ob.setExecutor(&hermes);

		try {
			ob.doBureaucracy("PresidentialPardon", "Pigley");
		}
		catch (OfficeBlock::SpecificException & e) {
			std::cout << e.what() << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "-------------------------------------" << std::endl;
	{
		Intern idiotOne;
		Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
		Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);

		OfficeBlock ob;

		ob.setIntern(&idiotOne);
		ob.setSigner(&bob);
		ob.setExecutor(&hermes);

		try {
			ob.doBureaucracy("mutant pig termination", "Pigley");
		}
		catch (OfficeBlock::SpecificException & e) {
			std::cout << e.what() << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "-------------------------------------" << std::endl;
	{
		Intern idiotOne;
		Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);

		OfficeBlock ob;

		ob.setIntern(&idiotOne);
		ob.setSigner(&bob);
		ob.setExecutor(NULL);

		try {
			ob.doBureaucracy("mutant pig termination", "Pigley");
		}
		catch (OfficeBlock::SpecificException & e) {
			std::cout << e.what() << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "-------------------------------------" << std::endl;
}
