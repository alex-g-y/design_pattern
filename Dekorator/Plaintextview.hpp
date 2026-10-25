#pragma once
#include "ITextview.hpp"

class Plaintextview : public ITextview
{
    private:

    std::string m_text;

    public:

    Plaintextview(std::string);
    void render() override;
    //void setText(std::string);
    void displayText();

        
};