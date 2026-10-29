#pragma once
#include "TextView.hpp"

class TextDekorator : public TextView
{
    protected:
        TextView* ptr_tv;

    public:
        TextDekorator(TextView*);
        void render() const override;
        ~TextDekorator();
};