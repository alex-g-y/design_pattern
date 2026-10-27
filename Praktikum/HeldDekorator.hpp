#pragma once
#include "Held.hpp"

class HeldDekorator
{
    protected:

        Held* ptr_held_D;
    
    public:

        HeldDekorator(Held*);
        HeldDekorator();
        virtual  int lebenspunkte_D() const;
        virtual  int mana_D() const ;
        virtual  std::vector<std::string> ausruestung_D() const ;

        virtual void  addAusruestung() const;
        virtual ~HeldDekorator();
};