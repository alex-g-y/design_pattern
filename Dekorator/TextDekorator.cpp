#include "TexDekorator.hpp"

void TextDekorator::render() const 
{
    ptr_tv->render();
}

TextDekorator::~TextDekorator()
{
    delete ptr_tv;
}

TextDekorator::TextDekorator(TextView* tv)
{
    ptr_tv = tv;
}