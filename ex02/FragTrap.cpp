#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
    name = "Bot 3";
    Hit_Points = 100;
    Energy_Points = 100;
    Attack_Damage = 30;
    std::cout << "\033[38;2;133;138;160mFragTrap " << name << " default constructor called\033[0m" << std::endl;
    std::cout << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
    this->name = name;
    Hit_Points = 100;
    Energy_Points = 100;
    Attack_Damage = 30;
    std::cout << "\033[38;2;133;138;160mFragTrap " << name << " constructor called\033[0m" << std::endl;
    std::cout << std::endl;
}

FragTrap::FragTrap( const FragTrap& old ) : ClapTrap(old)
{
    *this = old;
    std::cout << "\033[38;2;133;138;160mFragTrap " << name << " copy constructor called\033[0m" << std::endl;
    std::cout << std::endl;
}

FragTrap    &FragTrap::operator=( const FragTrap& old )
{
    if (this != &old)
    {
        ClapTrap::operator=(old);
        std::cout << "\033[38;2;133;138;160mFragTrap " << name << " copy assignement operator called\033[0m" << std::endl;
        std::cout << std::endl;
    }
    return (*this);
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "\033[35mFragTrap " << name << " requests a positive high five! ✋😄\033[0m" << std::endl;
    std::cout << std::endl;
}

FragTrap::~FragTrap( void )
{
    std::cout << "\033[38;2;133;138;160mFragTrap " << name << " destructor called\033[0m" << std::endl;
    std::cout << std::endl;
}