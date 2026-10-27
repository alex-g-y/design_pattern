#include "HeldDekorator.hpp"

HeldDekorator::HeldDekorator(Held* ptr_held)
{
    ptr_held_D = ptr_held;
}

HeldDekorator::HeldDekorator()
{
    ptr_held_D = nullptr;
}

HeldDekorator::~HeldDekorator()
{
    delete ptr_held_D;
}