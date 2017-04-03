/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 16:51:04 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/03 17:02:39 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact	Contact::addPhone(void) {
    Contact contact;

    std::cout << "First name: ";
    std::getline(std::cin, contact.firstName);
    std::cout << "Last name: ";
    std::getline(std::cin, contact.lastName);
    std::cout << "Nickname: ";
    std::getline(std::cin, contact.nickname);
    std::cout << "Login: ";
    std::getline(std::cin, contact.login);
    std::cout << "Postal address: ";
    std::getline(std::cin, contact.postalAddress);
    std::cout << "Email address: ";
    std::getline(std::cin, contact.emailAddress);
    std::cout << "Phone number: ";
    std::getline(std::cin, contact.phoneNumber);
    std::cout << "Birthday date: ";
    std::getline(std::cin, contact.birthdayDate);
    std::cout << "Favorite meal: ";
    std::getline(std::cin, contact.favoriteMeal);
    std::cout << "Underwear color: ";
    std::getline(std::cin, contact.underwearColor);
    std::cout << "Darkest secret: ";
    std::getline(std::cin, contact.darkestSecret);
    return (contact);
}

void    Contact::showContactAtIndex(Contact *contact, int nbMax) const {
    while (1) {
        std::cout << "Please select a valid index" << std::endl;
        std::string index;
        std::getline(std::cin, index);
        char c = index[0];
        if (index.length() == 1 && isdigit(c)) {
            int i = stoi(index);
            if (i <= nbMax && i > 0) {
                i--;
                std::cout << "First name: " << contact[i].firstName << std::endl;
                std::cout << "Last name: " << contact[i].lastName << std::endl;
                std::cout << "Nickname: " << contact[i].nickname << std::endl;
                std::cout << "Login: " << contact[i].login << std::endl;
                std::cout << "Postal address: " << contact[i].postalAddress << std::endl;
                std::cout << "Email address: " << contact[i].emailAddress << std::endl;
                std::cout << "Phone number: " << contact[i].phoneNumber << std::endl;
                std::cout << "Birthday date: " << contact[i].birthdayDate << std::endl;
                std::cout << "Favorite meal: " << contact[i].favoriteMeal << std::endl;
                std::cout << "Underwear color: " << contact[i].underwearColor << std::endl;
                std::cout << "Darkest secret: " << contact[i].darkestSecret << std::endl;
                return;
            }
        }
        std::cout << "I'm not sure to understand ..." << std::endl;
    }
    return;
}

void	Contact::showAllContacts(Contact *contact, int nbMax) const {
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    int cur = 0;
    while (cur < nbMax) {
        std::string firstName = contact[cur].firstName;
        if (firstName.size() >= 9) {
            firstName.resize(10);
            firstName[9] = '.';
        }
        std::string lastName = contact[cur].lastName;
        if (lastName.size() >= 9) {
            lastName.resize(10);
            lastName[9] = '.';
        }
        std::string nickname = contact[cur].nickname;
        if (nickname.size() >= 9) {
            nickname.resize(10);
            nickname[9] = '.';
        }
		std::cout << "|" << std::setfill(' ') << std::setw(10) << cur + 1 << "|";
        std::cout << std::setfill(' ') << std::setw(10) << firstName << "|";
        std::cout << std::setfill(' ') << std::setw(10) << lastName << "|";
        std::cout << std::setfill(' ') << std::setw(10) << nickname << "|" << std::endl;
        cur++;
    }
    showContactAtIndex(contact, nbMax);
    return;
}
