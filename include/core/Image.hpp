#pragma once

#include <vector>
#include <string>
#include <stdexcept>


class Image
{

public:

    Image(const std::string& filepath);

    int getWidth() const;
    int getHeight() const;
    int getChannels() const;
    int getPixel(int x, int y, int channel) const;
    void setPixel(int x, int y, int channel, int value);

private:

    std::vector<std::vector<std::vector<int>>> pixels;

    int width;
    int height;
    int channels;

};
