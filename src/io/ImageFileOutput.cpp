#include "io/ImageFileOutput.hpp"

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb/stb_image_write.h"

#include <vector>

ImageFileOutput::ImageFileOutput(const std::string &filepath) : filepath(filepath) {}

void ImageFileOutput::output(const Image &image) const
{
    std::vector<unsigned char> data;
    data.reserve(image.getWidth() * image.getHeight() * image.getChannels());

    for (size_t y = 0; y < image.getHeight(); ++y)
    {
        for (size_t x = 0; x < image.getWidth(); ++x)
        {
            for (size_t c = 0; c < image.getChannels(); ++c)
            {
                data.push_back(static_cast<unsigned char>(image.getPixel(x, y, c)));
            } 
        }   
    }
    
    size_t dotPos = filepath.find_last_of('.');
    std::string ext = (dotPos != std::string::npos) ? filepath.substr(dotPos) : "";

    if (ext == ".png")
    {
        stbi_write_png(filepath.c_str(), image.getWidth(), image.getHeight(),
         image.getChannels(),data.data(), image.getWidth() * image.getChannels());
    } else if (ext == ".jpg" || ext == ".jpeg")
    {
        stbi_write_jpg(filepath.c_str(), image.getWidth(), image.getHeight(),
         image.getChannels(), data.data(), 100);
    } else if (ext == ".bmp")
    {
        stbi_write_bmp(filepath.c_str(), image.getWidth(), image.getHeight(),
         image.getChannels(), data.data());
    } else 
    {
        throw std::runtime_error("Unsupported file format.");
    }
    
    
    
}
