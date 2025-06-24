# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(parallel_img_processing)

# Find packages
find_package(OpenCV REQUIRED)
find_package(MPI REQUIRED)
find_package(OpenMP REQUIRED)

add_subdirectory(src)
