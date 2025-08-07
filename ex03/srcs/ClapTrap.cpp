#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _ep(10), _ad(10)
{
	std::cout << "\e[1;30mDefault constructor called\e[0m" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap& ClapTrap)
{
	if (this != &ClapTrap)
		*this = ClapTrap;
	std::cout << "\e[1;30mCopy constructor called\e[0m" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "\e[1;30mDestructor called\e[0m" << std::endl;
	return ;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& ClapTrap)
{
	this->_name = ClapTrap._name;
	this->_hp = ClapTrap._hp;
	this->_ep = ClapTrap._ep;
	this->_ad = ClapTrap._ad;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
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
	std::cout << "\e[1;34m" << this->_name << " \e[1;35mattacks \e[1;34m" << target << "\e[0m" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << "\e[1;34m" << this->_name << "\e[0m is already \e[1;31mdead\e[0m" << std::endl;
		return ;
	}
	if (this->_hp < amount)
	{
		std::cout << "\e[1;34m" << this->_name << "\e[0m \e[1;35mloose " << this->_hp << "\e[0m hit points (0 remaining)" << std::endl;
		this->_hp = 0;
	}
	else
	{
		this->_hp -= amount;
		std::cout << "\e[1;34m" << this->_name << "\e[0m \e[1;35mloose " << amount << "\e[0m hit points (" << this->_hp <<  " remaining)" << std::endl;
	}
	if (this->_hp == 0)
		std::cout << "\e[1;34m" << this->_name << "\e[0m is \e[1;31mdead\e[0m" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << "\e[1;34m" << this->_name << "\e[0m cannot repair because he is \e[1;31mdead\e[0m" << std::endl;
		return ;
	}
	if (this->_ep == 0)
	{
		std::cout << "\e[1;34m" << this->_name << "\e[0m doesn't have enough \e[1;33menergy\e[0m to repair" << std::endl;
		return ;
	}
	this->_hp += amount;
	this->_ep--;
	std::cout << "\e[1;34m" << this->_name << "\e[1;35m repairs\e[0m himself (" << this->_hp <<  " remaining)" << std::endl;
}
