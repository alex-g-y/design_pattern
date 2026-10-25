#pragma once
#include "ITextview.hpp"

class Plaintextview : public ITextview
{
    private:

    std::string m_text;

    public:

    void render() override;
        
};