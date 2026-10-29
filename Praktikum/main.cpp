#include "Ritter.hpp"
#include "Magier.hpp"
#include "Held.hpp"
#include "HeldDekorator.hpp"
#include "Schwert.hpp"
#include "Ruestung.hpp"
#include "MagischerRing.hpp"


int main()
{

    Held* ptr_held_to_magier = new Magier();

    ptr_held_to_magier = new Schwert(new Schwert(ptr_held_to_magier));
     ptr_held_to_magier->displayEigenschaften();
    
     std::cout << "--------------------------\n\n";

ptr_held_to_magier = new Schwert(ptr_held_to_magier);
ptr_held_to_magier->displayEigenschaften();


std::cout << "--------------------------\n\n";

ptr_held_to_magier = new Ruestung(ptr_held_to_magier);
ptr_held_to_magier->displayEigenschaften();

std::cout << "--------------------------\n\n";

ptr_held_to_magier = new MagischerRing(ptr_held_to_magier);
ptr_held_to_magier->displayEigenschaften();


delete ptr_held_to_magier;

    //shared_ptr<Held>magier = make_shared<MagischerRing>(make_shared<Magier >());
    //ptr_ = new Schwert(pt);
    return 0;
    
}