/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 09:51:01 by tvisenti          #+#    #+#             */
/*   Updated: 2017/03/30 12:02:31 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_CLASS_H
# define PHONE_CLASS_H
# include "Contact.class.hpp"

class Phone {
    public:

        Phone(void);
        ~Phone(void);

        Contact AddPhone(void);
};

#endif
