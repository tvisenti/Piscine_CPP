/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 17:43:27 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/11 19:18:22 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(void) : _intern(NULL), _signer(NULL), _executor(NULL) {
    return;
}

OfficeBlock::OfficeBlock(Intern* intern, Bureaucrat* burSign, Bureaucrat* burExec) : _intern(intern), _signer(burSign), _executor(burExec) {
	return;
}

OfficeBlock::~OfficeBlock(void) {
    return;
}

void	OfficeBlock::setIntern(Intern* intern) {
	this->_intern = intern;
}

void	OfficeBlock::setSigner(Bureaucrat* signer) {
	this->_signer = signer;
}

void	OfficeBlock::setExecutor(Bureaucrat* executor) {
	this->_executor = executor;
}

void	OfficeBlock::doBureaucracy(std::string name, std::string target) const {
	if (this->_intern == NULL) {
		throw OfficeBlock::SpecificException(1);
	} else if (this->_signer == NULL) {
		throw OfficeBlock::SpecificException(2);
	} else if (this->_executor == NULL) {
		throw OfficeBlock::SpecificException(3);
	}
	Form* form = this->_intern->makeForm(name, target);
	this->_signer->signForm(*form);
	this->_executor->executeForm(*form);
	return;
}

OfficeBlock::SpecificException::SpecificException(int err) : _error(err) {
    return;
}

OfficeBlock::SpecificException::SpecificException(OfficeBlock::SpecificException const &src) {
    *this = src;
    return;
}

OfficeBlock::SpecificException::~SpecificException(void) throw() {
    return;
}

OfficeBlock::SpecificException &OfficeBlock::SpecificException::operator=(SpecificException const &rhs) {
	(void)rhs;
    return *this;
}

const char*	OfficeBlock::SpecificException::what() const throw() {
	switch (this->_error) {
		case 1:
			return ("Intern is not set!");
		case 2:
			return ("Signer is not set!");
		case 3:
			return ("Executor is not set!");
	}
	return ("Unknow error");
}
