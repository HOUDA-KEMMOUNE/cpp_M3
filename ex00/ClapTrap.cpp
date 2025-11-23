#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : name("Bot"), Hit_Points(10), Energy_Points(10), Attack_Damage(0)
{
	std::cout << "\033[38;2;0;41;102mClapTrap " << name << " default constructor called\033[0m" << std::endl;
	std::cout << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : Hit_Points(10), Energy_Points(10), Attack_Damage(0)
{
	std::cout << "\033[38;2;0;41;102mClaptrap " << name  << " constructor called\033[0m" << std::endl;
	this->name = name;
	std::cout << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &old)
{
	std::cout << "\033[38;2;0;41;102mClapTrap " << name << " copy constructor called\033[0m\n";
	*this = old;
	std::cout << std::endl;
}

ClapTrap &ClapTrap::operator=( const ClapTrap &old )
{
	if (this != &old)
	{
		std::cout << "\033[38;2;0;41;102mClapTrap " << name << " copy assignment operator called\033[0m\n";
		this->name = old.name;
	}
	return (*this);
}

void	ClapTrap::attack( const std::string &target )
{
	if (Hit_Points <= 0 || Energy_Points <= 0)
	{
		if (Hit_Points <= 0 && Energy_Points <= 0)
			std::cout << "\033[31mClapTrap " << name << " has neither HP nor energy points\033[0m" << std::endl;
		else if (Hit_Points <= 0)
			std::cout << "\033[31mClapTrap " << name << " is destroyed and cannot attack.\033[0m" << std::endl;
		else if (Energy_Points <= 0)
			std::cout << "\033[31mClapTrap " << name << " is out of energy.\033[0m" << std::endl;
		std::cout << std::endl;
		return ;
	}
	if (Energy_Points > 0)
		Energy_Points--;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << Attack_Damage << " points of damage!" << std::endl;
	std::cout << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (Hit_Points == 0)
	{
		std::cout << "\033[33mClapTrap default is already dead, stop beating it.\033[0m" << std::endl;
		std::cout << std::endl;
	}
	if (Hit_Points <= amount)
		Hit_Points = 0;
	else
		Hit_Points -= amount;
	if (amount >= Hit_Points)
	{
		Hit_Points = 0;
		std::cout << "\033[33mClapTrap " << name << " takes  " << amount << " points of dammage and is destroyed! HP reduced to 0\033[0m" << std::endl;
		std::cout << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " takes " << amount << " points of dammage! Current HP is now " << Hit_Points << std::endl;
	std::cout << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (Hit_Points <= 0 || Energy_Points <= 0)
	{
		if (Hit_Points <= 0 && Energy_Points <= 0)
			std::cout << "\033[31mClapTrap " << name << " has neither HP nor energy points\033[0m" << std::endl;
		else if (Hit_Points <= 0)
			std::cout << "\033[31mClapTrap " << name << " cannot repairs itself because it has 0 hit points left. It needs manual assistance.\033[0m" << std::endl;
		else if (Energy_Points <= 0)
			std::cout << "\033[31mClapTrap " << name << " is out of energy points (0/10) and cannot initiate repairs.\033[0m" << std::endl;
		std::cout << std::endl;
		return ;
	}
	Hit_Points += amount;
	Energy_Points--;
	std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points, coasting 1 Energy. New HP: " << Hit_Points << std::endl;
	std::cout << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "\033[38;2;0;41;102mClaptrap " << name << " destructor called\033[0m" << std::endl;
	std::cout << std::endl;
}

