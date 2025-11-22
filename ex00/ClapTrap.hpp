# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class   ClapTrap
{
	private:
		std::string		name;
		unsigned int	Hit_Points;
		unsigned int	Energy_Points;
		unsigned int	Attack_Damage;

	public:
		ClapTrap( std::string name );
		ClapTrap( void );
		ClapTrap(const ClapTrap &old);
		ClapTrap &operator=( const ClapTrap &old );
		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
		~ClapTrap( void );
};

# endif