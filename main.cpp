#include <iostream>
#include "core/Image.hpp"
#include "io/ConsoleOutput.hpp"
#include "core/ImageConverter.hpp"

int main(int argc, char const *argv[])
{
    try
    {
        Image image("input.jpg");

        ImageConverter::convertToGrayscale(image);

        ConsoleOutput consoleOutput;
        consoleOutput.output(image);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    


    return 0;
}
