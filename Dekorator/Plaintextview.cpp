#include "Plaintextview.hpp"

void Plaintextview::render()
{
    std::cout << "(normal): " << m_text << std::endl;
}

void Plaintextview::setText(std::string newText)
{
    m_text = newText;
}

void Plaintextview::displayText(std::string text)
{
    std::cout << text << std::endl;
}