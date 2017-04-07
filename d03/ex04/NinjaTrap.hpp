/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 21:51:33 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 21:19:59 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap {
	public:
		NinjaTrap(std::string name);
		virtual ~NinjaTrap(void);
		NinjaTrap(NinjaTrap const & src);

		NinjaTrap&	operator=(NinjaTrap const & rhs);

		void	ninjaShoebox(ClapTrap const & action) const;
		void	ninjaShoebox(FragTrap const & action) const;
		void	ninjaShoebox(ScavTrap const & action) const;
		void	ninjaShoebox(NinjaTrap const & action) const;

	private:
		NinjaTrap(void);
		void	log(void) const;
		void	initTrap(void);

	protected:
		static const unsigned int s_hitPoints = 60;
		static const unsigned int s_maxHitPoints = 60;
		static const unsigned int s_energyPoints = 120;
		static const unsigned int s_maxEnergyPoints = 120;
		static const unsigned int s_level = 1;
		static const unsigned int s_meleeAttackDamage = 60;
		static const unsigned int s_rangedAttackDamage = 5;
		static const unsigned int s_armorDamageReduction = 0;
		static const unsigned int s_stoneAttackDamage = 88;
		static const unsigned int s_spoonAttackDamage = 12;
		static const unsigned int s_chainsawPlasmaDeathMortalAttackDamage = 1;
		static const unsigned int s_stabInTheBackAttackDamage = 99;
		static const unsigned int s_kamehamehaAttackDamage = 9;

};

#endif
