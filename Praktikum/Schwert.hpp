#pragma once
#include "HeldDekorator.hpp"




class Schwert : public HeldDekorator
{

    public:

        Schwert(Held*);
        std::vector<std::string> ausruestung()  const override;
        


};