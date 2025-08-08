#pragma once

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {

	private:
		std::string	_name;

	public:
		DiamondTrap(std::string name = "DefaultName");
		DiamondTrap(const DiamondTrap& DiamondTrap);
		~DiamondTrap(void);

		DiamondTrap&	operator=(const DiamondTrap& DiamondTrap);

		void	attack(const std::string& target);
		void	whoAmI();

};
