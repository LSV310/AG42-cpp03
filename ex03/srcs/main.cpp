#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	clapTrap("ClapTrap");
	ClapTrap	trapClap("TrapClap");
	ScavTrap	scaveTrap("ScaveTrap");
	FragTrap	fragTrap("FragTrap");
	DiamondTrap	diamondTrap("DiamondTrap");

	clapTrap.attack("TrapClap");
	trapClap.takeDamage(2);
	clapTrap.attack("TrapClap");
	trapClap.takeDamage(2);
	trapClap.attack("TrapClap");
	clapTrap.takeDamage(2);
	clapTrap.attack("TrapClap");
	trapClap.takeDamage(2);
	clapTrap.attack("TrapClap");
	trapClap.takeDamage(2);
	trapClap.beRepaired(2);
	clapTrap.attack("TrapClap");
	trapClap.takeDamage(2);
	clapTrap.attack("TrapClap");
	trapClap.takeDamage(2);
	clapTrap.attack("TrapClap");
	trapClap.takeDamage(2);
	trapClap.attack("ClapTrap");
	trapClap.attack("TrapClap");
	clapTrap.beRepaired(1);
	clapTrap.beRepaired(1);
	clapTrap.beRepaired(1);
	clapTrap.attack("TrapClap");
	clapTrap.takeDamage(200);
	scaveTrap.attack("ScaveTrap");
	scaveTrap.takeDamage(3);
	scaveTrap.beRepaired(2);
	scaveTrap.guardGate();
	fragTrap.attack("ScaveTrap");
	scaveTrap.takeDamage(2);
	fragTrap.highFivesGuys();
	diamondTrap.attack("TrapClap");
	trapClap.takeDamage(2);
	diamondTrap.whoAmI();
	diamondTrap.highFivesGuys();
	diamondTrap.guardGate();
	return (0);
}