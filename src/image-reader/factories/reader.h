#ifndef IMAGE_READER_H
#define IMAGE_READER_H

#include <vector>
#include <string>
#include "models/image.h"

class ImageReader {
private:
  std::vector<unsigned char> image;
  int width, heights, channels;

public:
  Image read(std::string path);
  info();
};

#endif
