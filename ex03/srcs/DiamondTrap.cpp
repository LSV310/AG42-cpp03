#include "../headers/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_ad = FragTrap::_ad;
	std::cout << "\e[1;30mDiamondTrap default constructor called\e[0m" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap& DiamondTrap): ClapTrap(DiamondTrap.ClapTrap::_name), FragTrap(DiamondTrap._name), ScavTrap(DiamondTrap._name)
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

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& DiamondTrap)
{
	this->_name = DiamondTrap._name;
	this->_hp = DiamondTrap._hp;
	this->_ep = DiamondTrap._ep;
	this->_ad = DiamondTrap._ad;
	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is \e[1;34m" << this->_name << "\e[0m and my ClapTrap name is \e[1;34m" << ClapTrap::_name << "\e[0m" << std::endl;
	std::cout << "I have \e[1;35m" << this->_hp << "\e[0m hit points, \e[1;35m" << this->_ep << "\e[0m energy points and \e[1;35m" << this->_ad << "\e[0m attack damages" << std::endl;
}
