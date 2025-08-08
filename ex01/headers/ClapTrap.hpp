#pragma once

#include <iostream>

class ClapTrap {

	protected:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_ad;

	public:
		ClapTrap(std::string name = "DefaultName");
		ClapTrap(const ClapTrap& ClapTrap);
		~ClapTrap(void);

		ClapTrap&	operator=(const ClapTrap& ClapTrap);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

};
