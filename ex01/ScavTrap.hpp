# ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap
{
    public:
        ScavTrap( void );
        ScavTrap( std::string name );
        ScavTrap( const ScavTrap& old );
        ScavTrap& operator=( const ScavTrap& old );
		void	attack( const std::string& target );
        void    guardGate( void );
		~ScavTrap( void );
};

# endif