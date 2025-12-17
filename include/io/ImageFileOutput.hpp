#pragma once

#include "io/ImageOutput.hpp"
#include <string>

class ImageFileOutput : public ImageOutput
{

public:

    ImageFileOutput(const std::string& filepath);

    void output(const Image& image) const override;

private:
    
    std::string filepath;

};
