#include "BoldDecorator.hpp"
#include "ITextview.hpp"
#include "Plaintextview.hpp"
#include "ItalicDecorator.hpp"
#include "UnderlineDecorator.hpp"
#include "TextDecorator.hpp"

int main()
{

    Plaintextview* ptr_pt = new Plaintextview("Le text que je dois modifier");
    ptr_pt->render();
    std::cout << std::endl;
    BoldDecorator bd_deco(new ItalicDecorator(new UnderlineDecorator(ptr_pt)));
    bd_deco.render();
    std::cout << std::endl;

    /**
     * 
     *     std::cout << std::endl;

    //Je met le texte en gras
    BoldDecorator bold_deco(ptr_pt);
    

    std::cout << std::endl;

    //Je met le texte en italique
    ItalicDecorator ita_deco(&bold_deco);
    

    std::cout << std::endl;

    //Je souligne le texte
    UnderlineDecorator under_deco(&ita_deco);
    under_deco.render();
    
    std::cout << std::endl;

     */

    return 0;
}