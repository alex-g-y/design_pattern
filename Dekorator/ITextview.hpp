#pragma once
#include <iostream>
#include <fstream>


class ITextview
{

    public:

    virtual ~ITextview() = default;
    virtual std::string  render() = 0;
};