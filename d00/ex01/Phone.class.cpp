/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 09:50:50 by tvisenti          #+#    #+#             */
/*   Updated: 2017/03/30 14:07:42 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phone.class.hpp"
#include "Contact.class.hpp"

Phone::Phone(void) {
    std::cout << "This is your phone. Please enter an action: ADD, SEARCH or EXIT" << std::endl;
    return;
}

Phone::~Phone(void) {
        std::cout << "Phone is destroyed." << std::endl;
    return;
}

Contact Phone::AddPhone(void) {
    Contact contact;
    char buff[1024];
    for (int i = 0; i < 1024; i++) {
        buff[i] = ' ';
    }

    std::cout << "Please enter some infos" << std::endl;

    std::cout << "First name: ";        std::cin >> buff;   contact.firstName = buff;
    std::cout << "Last name: ";         std::cin >> buff;   contact.lastName = buff;
    std::cout << "Nickname: ";          std::cin >> buff;   contact.nickname = buff;
    std::cout << "Login: ";             std::cin >> buff;   contact.login = buff;
    std::cout << "Postal address: ";    std::cin >> buff;   contact.postalAddress = buff;
    std::cout << "Email address: ";     std::cin >> buff;   contact.emailAddress = buff;
    std::cout << "Phone number: ";      std::cin >> buff;   contact.phoneNumber = buff;
    std::cout << "Birthday date: ";     std::cin >> buff;   contact.birthdayDate = buff;
    std::cout << "Favorite meal: ";     std::cin >> buff;   contact.favoriteMeal = buff;
    std::cout << "Underwear color: ";   std::cin >> buff;   contact.underwearColor = buff;
    std::cout << "Darkest secret: ";    std::cin >> buff;   contact.darkestSecret = buff;
    return (contact);
}
