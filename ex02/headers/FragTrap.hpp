#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {

	public:
		FragTrap(std::string name = "DefaultName");
		FragTrap(const FragTrap& FragTrap);
		~FragTrap(void);

		FragTrap&	operator=(const FragTrap& FragTrap);

		void	highFivesGuys(void);

};
