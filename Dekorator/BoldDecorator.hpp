#pragma once 
#include "TextDecorator.hpp"


class BoldDecorator : public TextDecorator
{
    public:
    BoldDecorator(ITextview*);
    std::string render() override;
    void modify() override;
};