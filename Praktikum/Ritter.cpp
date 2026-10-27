#include "Ritter.hpp"


Ritter::Ritter():Held(10, 0)
{
    ausruestung_.push_back("100 Gold");
}


void Ritter::displayEigenschaften() const
{
    std::cout << "------Ritter--------\n";
    std::cout << "-- Lebenspunkte:_" << lebenspunkte() <<"_--Mana:_" << mana() <<std::endl;
    std::cout << "Ausruestungen: ";
    for(std::string i : ausruestung())
    {
        std::cout << i << " |";
    }
    std::cout << std::endl;
}