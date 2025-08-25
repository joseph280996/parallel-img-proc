#include "./reader.h"
#include "models/image.h"
#include "turbojpeg.h"
#include <fstream>
#include <string>

//region Private Methods
std::vector<unsigned char> ImageReader::readFileToMemory(const std::string& path) {
  std::ifstream file(path, std::ios::binary | std::ios::ate);
  if (!file.is_open()) {
    throw std:: runtime_error("Cannot open file: " + path);
  }

  std::streamsize size = file.tellg();
  file.seekg(0, std::ios::beg);

  std::vector<unsigned char> buffer(size);
  if (!file.read(reinterpret_case<char*>(buffer.data()), size)) {
    throw std::runtime_error("Failed to read file: " + path);
  }

  return buffer;
}
//endregion
//region Public Methods
//endregion

