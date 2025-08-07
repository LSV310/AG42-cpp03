#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& ScavTrap);
		~ScavTrap(void);

		ScavTrap&	operator=(const ScavTrap& ScavTrap);

		void	attack(const std::string& target);
		void	guardGate(void);

};
