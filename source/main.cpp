#include "../include/ImageProcessor.h"
#include <iostream>

#define IMAGE_PATH "../images/coelho_boo.jpg"

int main(void)
{
  cv::Mat img = imread (IMAGE_PATH, IMREAD_COLOR);
  ImageProcessor my_processor();
  my_processor.processImage().
  my_processor.printImages();
}

