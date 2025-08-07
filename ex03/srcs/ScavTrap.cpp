#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
	std::cout << "\e[1;30mScavTrap default constructor called\e[0m" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& ScavTrap): ClapTrap(ScavTrap._name)
{
	if (this != &ScavTrap)
		*this = ScavTrap;
	std::cout << "\e[1;30mScavTrap copy constructor called\e[0m" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "\e[1;30mScavTrap destructor called\e[0m" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hp == 0)
	{
		std::cout << "\e[1;34m" << this->_name << "\e[0m cannot attack because he is \e[1;31mdead\e[0m" << std::endl;
		return ;
	}
	if (this->_ep == 0)
	{
		std::cout << "\e[1;34m" << this->_name << "\e[0m doesn't have enough \e[1;33menergy\e[0m to attack" << std::endl;
		return ;
	}
	this->_ep--;
	std::cout << "ScavTrap \e[1;34m" << this->_name << " \e[1;35mattacks \e[1;34m" << target << "\e[0m" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "\e[1;34m" << this->_name << "\e[0m is now in \e[1;35mGate keeper\e[0m mode." << std::endl;
}
