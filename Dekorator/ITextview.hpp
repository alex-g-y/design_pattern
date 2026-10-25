#pragma once
#include <iostream>


class ITextview
{

    public:

    virtual ~ITextview() = default;
    virtual void render() = 0;
};