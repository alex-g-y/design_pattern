#pragma once
#include "Held.hpp"

class HeldDekorator : public Held 
{
    protected:

        Held* ptr_held_D;
    
    public:

        HeldDekorator(Held*);
         

        
          int lebenspunkte() const override;
          int mana() const override;
          std::vector<std::string> ausruestung() const override;
        
         virtual ~HeldDekorator();
};