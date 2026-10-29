#pragma once 
#include "HeldDekorator.hpp"


class MagischerRing : public HeldDekorator
{
    public:
        MagischerRing(Held*);
        int lebenspunkte() const override;
        std::vector<std::string> ausruestung() const override;
        int mana() const override;
};