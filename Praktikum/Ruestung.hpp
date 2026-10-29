#pragma once 
#include "HeldDekorator.hpp"


class Ruestung : public HeldDekorator
{
    public:
        Ruestung(Held*);
        int lebenspunkte() const override;
        std::vector<std::string> ausruestung() const override;
};