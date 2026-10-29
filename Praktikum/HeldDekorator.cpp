#include "HeldDekorator.hpp"

HeldDekorator::HeldDekorator(Held* ptr_held) 
{
    ptr_held_D = ptr_held;
}

HeldDekorator::~HeldDekorator()
{
    delete ptr_held_D;
}


int HeldDekorator::lebenspunkte() const
{
    return ptr_held_D->lebenspunkte();
}

int HeldDekorator::mana() const
{
    return ptr_held_D->mana();
}

std::vector<std::string> HeldDekorator::ausruestung() const
{
    return  ptr_held_D->ausruestung();
}



