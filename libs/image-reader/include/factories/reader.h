#ifndef LIB_IMAGE_READER_FACTORIES_H_
#define LIB_IMAGE_READER_FACTORIES_H_

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
