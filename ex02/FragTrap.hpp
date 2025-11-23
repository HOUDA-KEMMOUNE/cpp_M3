# ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class   FragTrap : public ClapTrap
{
    public:
        FragTrap( void );
        FragTrap( std::string name );
        FragTrap( const FragTrap& old );
        FragTrap &operator=( const FragTrap& old );
        void    highFivesGuys(void);
        ~FragTrap( void );
};

# endif