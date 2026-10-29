#include "Ruestung.hpp"

Ruestung::Ruestung(Held* ptr_h): HeldDekorator(ptr_h)
{}

std::vector<std::string> Ruestung::ausruestung() const 
{
     std::vector<std::string> tmp = ptr_held_D->ausruestung();
    tmp.push_back("Metallruestung");
    return tmp;

}

int Ruestung::lebenspunkte() const 
{
    int tmp = ptr_held_D->lebenspunkte();
    return tmp += 3;
}