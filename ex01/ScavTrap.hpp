# ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap
{
    /*
        ScavTrap will use the attributes of ClapTrap (update ClapTrap accordingly) and
        must initialize them to:
          • Name, which is passed as a parameter to the constructor
          • Hit points (100), representing the health of the ClapTrap
          • Energy points (50)
          • Attack damage (20)
    */
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