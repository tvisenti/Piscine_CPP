/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:34:04 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 17:32:28 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public virtual AWeapon {
	public:
		PlasmaRifle(void);
	    PlasmaRifle(PlasmaRifle const &src);
	    ~PlasmaRifle(void);
	    PlasmaRifle &operator=(PlasmaRifle const &rhs);

		void	attack(void) const;

	private:
		std::string		_name;
		int				_apcost;
		int				_damage;
};

#endif
