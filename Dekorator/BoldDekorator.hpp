#pragma once 
#include "TexDekorator.hpp"

class BoldDekorator : public TextDekorator
{
    public:
        BoldDekorator(TextView*);
        void render() const override;
};

