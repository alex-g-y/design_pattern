#include "Magier.hpp"

Magier::Magier():Held(5, 1)
{
    ausruestung_.push_back("Rune der Teleportation");
}

void Magier::displayEigenschaften() const
{
    std::cout << "------Magier--------\n";
    std::cout << "-- Lebenspunkte:_" << lebenspunkte() <<"_--Mana:_" << mana() <<std::endl;
    std::cout << "Ausruestungen: ";
    for(std::string i : ausruestung())
    {
        std::cout << i << " |";
    }
    std::cout << std::endl;
}