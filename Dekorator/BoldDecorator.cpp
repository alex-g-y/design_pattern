#include "BoldDecorator.hpp"

BoldDecorator::BoldDecorator(ITextview* _inner) : TextDecorator(_inner)
{}

std::string BoldDecorator::render()
{
   inner->render();
   std::cout << " [Text now in Bold]";
}


