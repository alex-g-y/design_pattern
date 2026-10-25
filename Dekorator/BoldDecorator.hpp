#pragma once 
#include "TextDecorator.hpp"


class BoldDecorator : public TextDecorator
{
    public:
    BoldDecorator(ITextview*);
    void render() override;
};