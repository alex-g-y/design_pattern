#include "ItalicDecorator.hpp"

ItalicDecorator::ItalicDecorator(ITextview* ptr_inner) : TextDecorator(ptr_inner)
{}

void ItalicDecorator::render()
{
    inner->render();
    std::cout << "[Text now in italic]";
}