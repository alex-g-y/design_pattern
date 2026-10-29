#include "Schwert.hpp"

Schwert::Schwert(Held* ptr_h):HeldDekorator(ptr_h)
{
     
}

std::vector<std::string> Schwert::ausruestung()  const
{
     std::vector<std::string> tmp = ptr_held_D->ausruestung();
     tmp.push_back("Excalibur");
     return tmp;
}

