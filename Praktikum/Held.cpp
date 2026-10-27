#include "Held.hpp"

Held::Held(int lebenspunkte, int mana):lebenspunkte_(lebenspunkte),mana_(mana)                                                                         
{

}

Held::Held()
{
    
}

std::vector<std::string> Held::ausruestung() const 
{
    return ausruestung_;
}

int Held::lebenspunkte() const 
{
    return lebenspunkte_;
}

int Held::mana() const 
{
    return mana_;
}

void Held::displayEigenschaften() const
{
    
    std::cout << "-- Lebenspunkte:_" << lebenspunkte() <<"_--Mana:_" << mana() <<std::endl;
    std::cout << "Ausruestungen: ";
    for(std::string i : ausruestung())
    {
        std::cout << i << " |";
    }
    std::cout << std::endl;
}


void Held::addAusruestung(std::string ausruestung)
{
    ausruestung_.push_back(ausruestung);
}