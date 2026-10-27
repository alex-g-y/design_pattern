#pragma once
#include "ITextview.hpp"


class Plaintextview : public ITextview
{
    private:

    std::string m_text;

    public:

    Plaintextview(std::string);
    std::string  render() override;
   
    

        
};