/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 09:13:48 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 21:29:08 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap  {
	public:
		FragTrap(std::string name);
		virtual ~FragTrap(void);
		FragTrap(FragTrap const & src);

		FragTrap&	operator=(FragTrap const & rhs);

		void	vaulthunter_dot_exe(std::string const & target);

	private:
		FragTrap(void);
		void	log(void) const;
		void	initTrap(void);

	protected:
		static const unsigned int s_hitPoints = 100;
		static const unsigned int s_maxHitPoints = 100;
		static const unsigned int s_energyPoints = 100;
		static const unsigned int s_maxEnergyPoints = 100;
		static const unsigned int s_level = 1;
		static const unsigned int s_meleeAttackDamage = 30;
		static const unsigned int s_rangedAttackDamage = 20;
		static const unsigned int s_armorDamageReduction = 5;
		static const unsigned int s_stoneAttackDamage = 1;
		static const unsigned int s_spoonAttackDamage = 99;
		static const unsigned int s_chainsawPlasmaDeathMortalAttackDamage = 6;
		static const unsigned int s_stabInTheBackAttackDamage = 21;
		static const unsigned int s_kamehamehaAttackDamage = 42;

};

#endif
