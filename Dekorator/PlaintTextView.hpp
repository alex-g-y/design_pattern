#pragma once 
#include "TextView.hpp"
#include <string>

class PlainTextView : public TextView
{
    private: 
        std::string text;

    public:
        PlainTextView(std::string);
        void render() const override;
};