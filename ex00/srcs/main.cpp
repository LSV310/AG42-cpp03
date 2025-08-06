#include <iostream>
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clapTrap("ClapTrap");
	ClapTrap trapClap("TrapClap");

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
	return (0);
}