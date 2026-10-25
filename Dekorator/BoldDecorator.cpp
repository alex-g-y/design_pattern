#include "BoldDecorator.hpp"

BoldDecorator::BoldDecorator(ITextview* _inner) : TextDecorator(_inner)
{}

void BoldDecorator::render()
{
   inner->render();
   std::cout << " [Text now in Bold]";
}
