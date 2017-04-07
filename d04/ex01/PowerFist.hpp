/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:38:01 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 18:21:21 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public virtual AWeapon {
	public:
		PowerFist(void);
	    PowerFist(PowerFist const &src);
	    ~PowerFist(void);
	    PowerFist &operator=(PowerFist const &rhs);

		void	attack(void) const;

	private:

};

#endif
