#include "BoldDekorator.hpp"
#include "PlaintTextView.hpp"
#include "TexDekorator.hpp"
#include "TextView.hpp"

int main()
{

    TextView* ptr_text_V = new PlainTextView("Bonjour");
     
    ptr_text_V = new BoldDekorator(ptr_text_V);
    ptr_text_V->render();
    std::cout << "\n";
    ptr_text_V = new BoldDekorator(ptr_text_V);
    ptr_text_V->render();
    std::cout << "\n";
    return 0;
}