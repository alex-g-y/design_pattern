#include "PlaintTextView.hpp"

void PlainTextView::render() const 
{
    std::cout << text;
}


PlainTextView::PlainTextView(std::string _text): TextView()
{
    text = _text;
}