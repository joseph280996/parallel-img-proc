#ifndef LIB_IMAGE_MODEL_FACTORIES_H_
#define LIB_IMAGE_MODEL_FACTORIES_H_

#include <vector>

struct Image {
  std::vector<unsigned char> data;
  int width;
  int height;
  int channels;
};

#endif
