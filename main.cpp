#include <iostream>
#include "core/Image.hpp"
#include "io/ConsoleOutput.hpp"
#include "core/ImageConverter.hpp"
#include "io/ImageFileOutput.hpp"

int main(int argc, char const *argv[])
{
    try
    {
        Image image("input.jpg");

        ImageConverter::convertToGrayscale(image);

        // ConsoleOutput consoleOutput;
        // consoleOutput.output(image);

        ImageFileOutput fileOutput("output.jpg");
        fileOutput.output(image);
        
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    


    return 0;
}
