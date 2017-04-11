/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 08:30:54 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/11 22:24:48 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "OfficeBlock.hpp"
#include "CentralBureaucracy.hpp"

Bureaucrat*	randomBureaucrat(int ind) {
	Bureaucrat *bur = new Bureaucrat(("Bur" + std::to_string(ind)), rand() % 150 + 1);
	return bur;
}

int main()
{
	srand(time(NULL));

	std::string formArr[4] = {"PresidentialPardon", "RobotomyRequest", "ShrubberyCreation", "Invalid Form"};
	CentralBureaucracy cb;
	Bureaucrat *newBur[BUREAUCRATE_NUMBER];
	for (int i = 0; i < BUREAUCRATE_NUMBER; i++) {
		newBur[i] = randomBureaucrat(i);
	}
	for (int i = 0; i < TARGET_SIZE; i++) {
		cb.queueUp("Target" + std::to_string(i));
	}
	for (int i = 0; i < BUREAUCRATE_NUMBER; i++) {
		cb.feedOffice(newBur[i]);
	}
	for (int i = 0; i < TARGET_SIZE; i++) {
		try {
			cb.getOfficeCentral(rand() % CENTRAL_SIZE).doBureaucracy(formArr[rand() % 4], cb.getTarget(i));
		}
		catch (OfficeBlock::SpecificException & e) {
			std::cout << e.what() << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
}
