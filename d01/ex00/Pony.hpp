/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 16:05:11 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/04 10:07:38 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

class Pony {
    public:
        const char *name;
        Pony( const char* name );
        ~Pony( void );

		void	anyAction(void);
};

#endif
