#pragma once

#include "core/Image.hpp"

class ImageOutput
{

public:

    virtual ~ImageOutput() = default;

    virtual void output(const Image& image) const = 0;
};

