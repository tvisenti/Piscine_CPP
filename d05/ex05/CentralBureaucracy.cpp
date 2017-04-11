/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 19:39:20 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/11 22:31:30 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"

CentralBureaucracy::CentralBureaucracy(void) : _ind(0) {
	for (int i = 0; i < TARGET_SIZE; i++) {
		_targets[i] = "";
	}
    return;
}

CentralBureaucracy::~CentralBureaucracy(void) {
    return;
}


CentralBureaucracy& CentralBureaucracy::operator=(const CentralBureaucracy&) {
	return *this;
}

void	CentralBureaucracy::feedOffice(Bureaucrat* newBur) {
	if (_ind < 20) {
		if (!_central[_ind].getIntern())
			_central[_ind].setIntern(new Intern());
		if (!_central[_ind].getSigner()) {
			_central[_ind].setSigner(newBur);
		} else if (!_central[_ind].getExecutor()) {
			_central[_ind].setExecutor(newBur);
			_ind++;
		}
	} else {
		std::cout << "Office is full of bureaucrats." << std::endl;
	}
}

void	CentralBureaucracy::queueUp(std::string target) {
	int i;
	for (i = 0; _targets[i] != ""; i++);
	_targets[i] = target;
}

int		CentralBureaucracy::myRand(int l, int r) {
	return ((rand() % (r - l)) + l);
}

OfficeBlock		&CentralBureaucracy::getOfficeCentral(int i) {
	return _central[i];
}

std::string		CentralBureaucracy::getTarget(int i) {
	return _targets[i];
}

int			CentralBureaucracy::getIndex(void) {
	return this->_ind;
}
