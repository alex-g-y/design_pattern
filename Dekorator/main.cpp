#include "BoldDecorator.hpp"
#include "ITextview.hpp"
#include "Plaintextview.hpp"
#include "TextDecorator.hpp"

int main()
{

    Plaintextview* ptr_pt = new Plaintextview("Le text que je dois modifier");
    ptr_pt->render();

    std::cout << std::endl;
    
    BoldDecorator bold_deco(ptr_pt);
    bold_deco.render();


    


    return 0;
}