/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 10:18:21 by tvisenti          #+#    #+#             */
/*   Updated: 2017/03/30 17:27:57 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {
    public:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string login;
        std::string postalAddress;
        std::string emailAddress;
        std::string phoneNumber;
        std::string birthdayDate;
        std::string favoriteMeal;
        std::string underwearColor;
        std::string darkestSecret;
};

#endif
