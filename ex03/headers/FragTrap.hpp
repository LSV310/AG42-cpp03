#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {

	protected:
		unsigned int	_hp;
		unsigned int	_ad;

	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap& FragTrap);
		~FragTrap(void);

		FragTrap&	operator=(const FragTrap& FragTrap);

		void	highFivesGuys(void);

};
