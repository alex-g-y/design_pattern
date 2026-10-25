#pragma once 
#include "ITextview.hpp"

class TextDecorator : public ITextview
{
    protected:

    ITextview* inner;

    public:

    TextDecorator(ITextview*);
    

};