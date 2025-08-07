#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
	std::cout << "\e[1;30mFragTrap default constructor called\e[0m" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap& FragTrap): ClapTrap(FragTrap._name)
{
	if (this != &FragTrap)
		*this = FragTrap;
	std::cout << "\e[1;30mFragTrap copy constructor called\e[0m" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "\e[1;30mFragTrap destructor called\e[0m" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "\e[1;34m" << this->_name << "\e[0m is asking for a \e[1;35mHigh Five\e[0m !" << std::endl;
}
