#include "TextDecorator.hpp"

TextDecorator::TextDecorator(ITextview* _inner)
{
    this->inner  = _inner;
}

TextDecorator::~TextDecorator()
{
    delete inner;
}