#pragma once 
#include "io/ImageOutput.hpp"

class ConsoleOutut : public ImageOutput
{

public:

    void output(const Image& image) const override;
};
