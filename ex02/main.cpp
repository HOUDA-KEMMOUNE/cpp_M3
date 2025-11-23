#include "FragTrap.hpp"

int main()
{
    FragTrap    Bot;
    FragTrap    Fin("Fin");

    Fin.attack("Ice King");
    Fin.takeDamage(30);
    Fin.beRepaired(90);

    std::cout << "-----------------------------------------\n" << std::endl;

    Bot.attack("Kaska");
    Bot.takeDamage(130);
    Bot.beRepaired(190);
}