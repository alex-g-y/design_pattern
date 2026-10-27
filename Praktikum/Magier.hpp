#pragma once 
#include "Held.hpp"


class Magier : public Held
{
    public:

        Magier();
        void displayEigenschaften() const override;
};