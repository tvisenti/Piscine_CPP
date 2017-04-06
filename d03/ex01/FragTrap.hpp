/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 09:13:48 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/06 20:15:59 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>

class FragTrap {
	public:
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(FragTrap const & src);

		FragTrap&	operator=(FragTrap const & rhs);

		void	rangedAttack(std::string const & target) const;
		void	meleeAttack(std::string const & target) const;

		void	stoneAttack(std::string const & target) const;
		void	spoonAttack(std::string const & target) const;
		void	chainsawPlasmaDeathMortalAttack(std::string const & target) const;
		void	stabInTheBackAttack(std::string const & target) const;
		void	kamehamehaAttack(std::string const & target) const;

		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	vaulthunter_dot_exe(std::string const & target);

	private:
		FragTrap(void);
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
