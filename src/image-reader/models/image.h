#ifndef IMAGE_H
#define IMAGE_H

class Image {
public:
  std::vector<unsigned char> data;
  int width, height, channels;
  Image() : width(0), height(0), channels(0) {}
};

#endif
