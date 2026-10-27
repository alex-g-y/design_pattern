#include "Schwert.hpp"

Schwert::Schwert(Held* ptr_h):HeldDekorator(ptr_h)
{}

void Schwert::addAusruestung() const 
{
     ptr_held_D->addAusruestung("Excalibur");
}