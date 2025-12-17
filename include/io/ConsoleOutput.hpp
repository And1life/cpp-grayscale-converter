#pragma once 
#include "io/ImageOutput.hpp"

class ConsoleOutput : public ImageOutput
{

public:

    void output(const Image& image) const override;
};
