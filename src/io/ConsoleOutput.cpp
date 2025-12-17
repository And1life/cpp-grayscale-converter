#include "io/ConsoleOutput.hpp"
#include <iostream>

void ConsoleOutput::output(const Image& image) const 
{
    for (int y = 0; y < image.getHeight(); y += 2) {
        for (int x = 0; x < image.getWidth(); ++x) {
            int pixel = image.getPixel(x, y, 0);
            std::cout << (pixel < 128 ? ' ' : '#');
        }
        std::cout << '\n';
    }
}