/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 16:47:34 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/06 19:07:46 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>

class ScavTrap {
	public:
		ScavTrap(std::string name);
		~ScavTrap(void);

		ScavTrap&	operator=(ScavTrap const & rhs);

		void	rangedAttack(std::string const & target) const;
		void	meleeAttack(std::string const & target) const;

		void	stoneAttack(std::string const & target) const;
		void	spoonAttack(std::string const & target) const;
		void	chainsawPlasmaDeathMortalAttack(std::string const & target) const;
		void	stabInTheBackAttack(std::string const & target) const;
		void	kamehamehaAttack(std::string const & target) const;

		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	challengeNewcomer(std::string const & target);

	private:
		ScavTrap(void);
		void	log(void) const;

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

};

#endif
