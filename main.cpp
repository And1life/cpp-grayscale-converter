#include <iostream>
#include "core/Image.hpp"

int main(int argc, char const *argv[])
{
    try
    {
        Image image("input.jpg");

        std::cout << "Width: " << image.getWidth() << std::endl;
        std::cout << "Height: " << image.getHeight() << std::endl;
        std::cout << "Channels: " << image.getChannels() << std::endl;

        std::cout << "Pixel value R: " << image.getPixel(562, 0, 0) << std::endl;
        std::cout << "Pixel value G: " << image.getPixel(562, 0, 1) << std::endl;
        std::cout << "Pixel value B: " << image.getPixel(562, 0, 2) << std::endl;

        image.setPixel(562, 0, 0, 255);
        image.setPixel(562, 0, 1, 255);
        image.setPixel(562, 0, 2, 255);

        std::cout << "Pixel value R: " << image.getPixel(562, 0, 0) << std::endl;
        std::cout << "Pixel value G: " << image.getPixel(562, 0, 1) << std::endl;
        std::cout << "Pixel value B: " << image.getPixel(562, 0, 2) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    


    return 0;
}
