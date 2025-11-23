#include "ScavTrap.hpp"

int main()
{
    ScavTrap Bot;
    ScavTrap Guts("Guts");

    Guts.attack("Grifith");
    Guts.takeDamage(10);
    Guts.beRepaired(55);
    Guts.guardGate();

    std::cout << "-----------------------------------------------------------\n" << std::endl;

    Bot.attack("Bimbo");
    Bot.takeDamage(999);
    Bot.beRepaired(4);
    Bot.guardGate();
}