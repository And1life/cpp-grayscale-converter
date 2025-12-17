#include "io/ConsoleOutput.hpp"
#include <iostream>

void ConsoleOutput::output(const Image& image) const
{
    const size_t targetWidth  = 120;
    const size_t targetHeight = 40;

    for (size_t y = 0; y < targetHeight; ++y) {
    size_t srcY = y * image.getHeight() / targetHeight;
    for (size_t x = 0; x < targetWidth; ++x) {
        size_t srcX = x * image.getWidth() / targetWidth;
        int pixel = image.getPixel(srcX, srcY, 0);
        std::cout << (pixel < 128 ? '*' : ' ');
    }
    std::cout << '\n';
}
}