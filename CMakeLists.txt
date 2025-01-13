# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(parallel_img_processing)

# Find packages
find_package(OpenCV REQUIRED)
find_package(MPI REQUIRED)
find_package(OpenMP REQUIRED)

# Add executable
add_executable(flip src/flipping.cpp)

# Include directories
target_include_directories(flip PUBLIC include PRIVATE ${OpenCV_INCLUDE_DIRS} ${MPI_INCLUDE_PATH})

# Link libraries
target_link_libraries(flip PRIVATE ${OpenCV_LIBS} ${MPI_CXX_LIBRARIES}
    OpenMP::OpenMP_CXX
)

# Add MPI compile flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${MPI_CXX_COMPILE_FLAGS}")
