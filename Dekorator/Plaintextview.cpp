#include "Plaintextview.hpp"


Plaintextview::Plaintextview(std::string text)
{
      m_text = text;
       std::ofstream file("maPage.html");
     file << text ;
  
}
   

std::string  Plaintextview::render()
{
    return m_text;
}




