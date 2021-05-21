#ifndef IMAGEPROCESSOR_H
#define IMAGEPROCESSO_H

#include <string.h>
#include "opencv2/opencv.hpp"
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

#define LOWER_YELLOW_1 15
#define LOWER_YELLOW_2 75
#define LOWER_YELLOW_3 0

#define UPPER_YELLOW_1 50
#define UPPER_YELLOW_2 255
#define UPPER_YELLOW_3 255

using namespace cv;
using namespace std;

class ImageProcessor
{
public:
  
  ImageProcessor();
  ~ImageProcessor();
  Mat original_img, warped_img, mask_img, result_img, hsv_img, hls_img, lab_image;
  int width, height;
  float path_angle;
  int dist_diff;
  Point2f path_center;
  bool warped_flag;
  
  std::vector<std::vector<float>> sortPoints(std::vector<float> array_y, std::vector<float> array_x);
  
  void getWarpedImage(cv::Mat image,int offset_x, int offset_y, int offset_x_dst);
 
  void getMask(cv::Mat input_img);

  void getMask(cv::Mat input_img);

  void convertRGBToHSV(cv::Mat input_img);

  void convertRGBToHLS(cv::Mat input_img);

  void convertRGBToLAB(cv::Mat input_img);

  bool getResultImage(cv::Mat input_img);
  
  void getOutput(int &dist_diff_out, float &path_angle_out);
  
  void printAll();
  
  bool processImage(cv::Mat image, cv::Mat &processed_img);
};

#endif