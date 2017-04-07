/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 19:15:26 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/07 11:51:37 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap {
	public:
		ClapTrap(std::string name, std::string log);
		virtual ~ClapTrap(void);
		ClapTrap(ClapTrap const & src);

		ClapTrap&	operator=(ClapTrap const & rhs);

		std::string	getClapName(void) const;

		void	initTrap(void);
		void	log(void) const;

		void	rangedAttack(std::string const & target) const;
		void	meleeAttack(std::string const & target) const;

		void	stoneAttack(std::string const & target) const;
		void	spoonAttack(std::string const & target) const;
		void	chainsawPlasmaDeathMortalAttack(std::string const & target) const;
		void	stabInTheBackAttack(std::string const & target) const;
		void	kamehamehaAttack(std::string const & target) const;

		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:

	protected:
		ClapTrap(void);

		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int	_level;
		std::string		_name;
		unsigned int	_meleeAttackDamage;
		unsigned int	_rangedAttackDamage;
		unsigned int	_armorDamageReduction;

		unsigned int	_stoneAttackDamage;
		unsigned int	_spoonAttackDamage;
		unsigned int	_chainsawPlasmaDeathMortalAttackDamage;
		unsigned int	_stabInTheBackAttackDamage;
		unsigned int	_kamehamehaAttackDamage;

		std::string		_log;

};

#endif
