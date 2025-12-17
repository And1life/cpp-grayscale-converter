#include "core/ImageConverter.hpp"

void ImageConverter::convertToGrayscale(Image &image)
{
    if (image.getChannels() == 1)
    {
        return;
    }

    for (size_t y = 0; y < image.getHeight(); ++y)
    {
        for (size_t x = 0; x < image.getWidth(); ++x)
        {
            int r = image.getPixel(x, y, 0);
            int g = image.getPixel(x, y, 1);
            int b = image.getPixel(x, y, 2);

            int gray = static_cast<int>( 0.299 * r + 0.587 * g + 0.114 * b);
            for (size_t c = 0; c < image.getChannels(); ++c)
            {
                image.setPixel(x, y, c, gray);
            }    
        }   
    }    
}