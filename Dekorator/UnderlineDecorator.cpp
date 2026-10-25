#include "UnderlineDecorator.hpp"

UnderlineDecorator::UnderlineDecorator(ITextview* ptr_inner) : TextDecorator(ptr_inner)
{}

void UnderlineDecorator::render()
{
    inner->render();
    std::cout << "[Text now underlined]";
}