#pragma once 
#include "TextDecorator.hpp"


class  ItalicDecorator : public TextDecorator
{
    public:

    ItalicDecorator(ITextview*);
    void render () override;
};