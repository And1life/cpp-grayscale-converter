#include "Image.hpp"
#include "stb/stb_image.h"

Image::Image(const std::string &filepath)
{
    unsigned char* data = stbi_load(filepath.c_str(), &width, &height, &channels, 0);

    if (!data)
    {
        throw std::runtime_error("Failed to load image.");
    }

    pixels.resize(height, std::vector<std::vector<int>>(width, std::vector<int>(channels)));
    
    for (size_t y = 0; y < height; ++y)
    {
        for (size_t x = 0; x < width; ++x)
        {
            for (size_t c = 0; c < channels; ++c)
            {
                pixels[y][x][c] = data[(y * width + x) * channels +c];
            }   
        }
    }

    stbi_image_free(data);
    
}

int Image::getWidth() const
{
    return width;
}

int Image::getHeight() const
{
    return height;
}

int Image::getChannels() const
{
    return channels;
}

int Image::getPixel(int x, int y, int channel) const
{
    return pixels[y][x][channel];
}

void Image::setPixel(int x, int y, int channel, int value)
{
    pixels[y][x][channel] = value;
}
