#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {

	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap& FragTrap);
		~FragTrap(void);

		void	highFivesGuys(void);

};
