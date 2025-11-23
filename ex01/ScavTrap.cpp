#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
    this->name = "Bot 2.0"; // Note: 'name' might be inherited and accessible, or require a setter if private.
    this->Hit_Points = 100;
    this->Energy_Points = 50;
    this->Attack_Damage = 20;   
    std::cout << "\033[34mScavTrap " << name << " default constructor called\033[0m" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap()
{
    this->name = "Bot 2.0"; // Note: 'name' might be inherited and accessible, or require a setter if private.
    this->Hit_Points = 100;
    this->Energy_Points = 50;
    this->Attack_Damage = 20;    std::cout << "\033[34mScavTrap " << name << " constructor called\033[0m" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& old)
{
    *this = old;
    std::cout << "\033[34mScavTrap " << name << " copy constructor called\033[0m" << std::endl;
}

ScavTrap    &ScavTrap::operator( const ScavTrap& old )
{
    if (this != &old)
    {
        this->name = old.name;
        std::cout << "\033[34mScavTrap " << name << " copy assignement operator called\033[0m" << std::endl;
    }
    return (*this);
}

void	ClapTrap::attack( const std::string &target )
{
	if (Hit_Points <= 0 || Energy_Points <= 0)
	{
		if (Hit_Points <= 0 && Energy_Points <= 0)
			std::cout << "\033[31mScavTrap " << name << " has neither HP nor energy points\033[0m" << std::endl;
		else if (Hit_Points <= 0)
			std::cout << "\033[31mScavTrap " << name << " is destroyed and cannot attack.\033[0m" << std::endl;
		else if (Energy_Points <= 0)
			std::cout << "\033[31mScavTrap " << name << " is out of energy.\033[0m" << std::endl;
		std::cout << std::endl;
		return ;
	}
	if (Energy_Points > 0)
		Energy_Points--;
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << Attack_Damage << " points of damage!" << std::endl;
	std::cout << std::endl;
}

void    ScavTrap::guardGate( void )
{
    std::cout << "\033[38;2;116;179;178mScavTrap " << name << " is now in Gate keeper mode.\033[0m" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "\033[34mScavTrap " << name << " default destructor called\033[0m" << std::endl;
}