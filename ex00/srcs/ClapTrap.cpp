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
		std::cout << this->_name << " cannot attack because he is dead" << std::endl;
		return ;
	}
	if (this->_ep == 0)
	{
		std::cout << this->_name << " doesn't have enough energy to attack" << std::endl;
		return ;
	}
	this->_ep--;
	std::cout << this->_name << " attacks " << target <<  std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << this->_name << " is already dead" << std::endl;
		return ;
	}
	if (this->_hp < amount)
	{
		std::cout << this->_name << " loose " << this->_hp << " hit points (0 remaining)" << std::endl;
		this->_hp = 0;
	}
	else
	{
		this->_hp -= amount;
		std::cout << this->_name << " loose " << amount << " hit points (" << this->_hp <<  " remaining)" << std::endl;
	}
	if (this->_hp == 0)
		std::cout << this->_name << " is dead" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << this->_name << " cannot repair because he is dead" << std::endl;
		return ;
	}
	if (this->_ep == 0)
	{
		std::cout << this->_name << " doesn't have enough energy to repair" << std::endl;
		return ;
	}
	this->_hp += amount;
	this->_ep--;
	std::cout << this->_name << " repairs himself (" << this->_hp <<  " remaining)" << std::endl;
}
