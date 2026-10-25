#pragma once 
#include "TextDecorator.hpp"


class  UnderlineDecorator : public TextDecorator
{
    public:

    UnderlineDecorator(ITextview*);
    void render () override;
};