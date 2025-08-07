#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	clapTrap("ClapTrap");
	ClapTrap	trapClap("TrapClap");
	ScavTrap	scaveTrap("ScaveTrap");

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
	return (0);
}