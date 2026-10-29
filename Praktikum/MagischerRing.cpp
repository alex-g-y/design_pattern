#include "MagischerRing.hpp"

MagischerRing::MagischerRing(Held* ptr_h): HeldDekorator(ptr_h)
{}

std::vector<std::string> MagischerRing::ausruestung() const 
{
     std::vector<std::string> tmp = ptr_held_D->ausruestung();
    tmp.push_back("Magischer Ring");
    return tmp;

}

int MagischerRing::lebenspunkte() const 
{
    int tmp = ptr_held_D->lebenspunkte();
    return tmp += 2;
}

int MagischerRing::mana() const
{
    int tmp = ptr_held_D->mana();
    return tmp += 2;
}