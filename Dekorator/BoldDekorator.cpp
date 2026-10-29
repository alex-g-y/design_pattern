#include "BoldDekorator.hpp"

BoldDekorator::BoldDekorator(TextView* tv): TextDekorator(tv)
{}


void BoldDekorator::render() const 
{
    std::cout << "<b>" ;
    ptr_tv->render();
    std::cout << "</b>" ;

}