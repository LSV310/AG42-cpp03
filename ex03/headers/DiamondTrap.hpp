#pragma once

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {

	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& DiamondTrap);
		~DiamondTrap(void);

		void	whoAmI();

};
