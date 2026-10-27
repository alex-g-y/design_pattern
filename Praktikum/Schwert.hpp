#pragma once
#include "HeldDekorator.hpp"




class Schwert : public HeldDekorator
{

    public:

        Schwert(Held* ptr_h);
        void addAusruestung() const override;


};