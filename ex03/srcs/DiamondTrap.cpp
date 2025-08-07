#include "../headers/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 30;
	std::cout << "\e[1;30mDiamondTrap default constructor called\e[0m" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap& DiamondTrap): ClapTrap(DiamondTrap._name), FragTrap(DiamondTrap._name), ScavTrap(DiamondTrap._name)
{
	if (this != &DiamondTrap)
		*this = DiamondTrap;
	std::cout << "\e[1;30mDiamondTrap copy constructor called\e[0m" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "\e[1;30mDiamondTrap destructor called\e[0m" << std::endl;
	return ;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is \e[1;34m" << this->_name << "\e[0m and my ClapTrap name is \e[1;34m" << ClapTrap::_name << "\e[0m" << std::endl;
}
