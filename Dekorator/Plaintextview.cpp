#include "Plaintextview.hpp"


Plaintextview::Plaintextview(std::string text)
{
    m_text = text;
}
void Plaintextview::render()
{
    std::cout << "(normal): " << m_text;
}

/**
 * void Plaintextview::setText(std::string newText)
{
    m_text = newText;
}

 */

void Plaintextview::displayText()
{
    std::cout << this->m_text << std::endl;
}

