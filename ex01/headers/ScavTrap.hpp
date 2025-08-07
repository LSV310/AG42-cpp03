#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& ScavTrap);
		~ScavTrap(void);

		void	attack(const std::string& target);
		void	guardGate(void);

};
