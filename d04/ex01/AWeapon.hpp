/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:31:42 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 17:33:56 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>

class AWeapon {
	public:
		AWeapon(std::string const & name, int apcost, int damage);
	    AWeapon(AWeapon const &src);
	    virtual ~AWeapon(void);
	    AWeapon &operator=(AWeapon const &rhs);

		std::string const getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;

	protected:

	private:
		AWeapon(void);
		std::string		_name;
		int				_apcost;
		int				_damage;
};

#endif
