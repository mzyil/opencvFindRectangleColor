cmake_minimum_required(VERSION 3.6)
project(RaspiCVTest)

set(CMAKE_CXX_STANDARD 11)

# Where to find CMake modules and OpenCV
set(OpenCV_DIR ${OpenCV_DIR} "C:\\opencv\\build\\install")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

set(SOURCE_FILES main.cpp)
add_executable(RaspiCVTest ${SOURCE_FILES})

# add libs you need
set(OpenCV_LIBS ${OpenCV_LIBS} opencv_core opencv_imgproc opencv_calib3d opencv_videoio opencv_features2d opencv_ml opencv_highgui opencv_objdetect)

# linking
target_link_libraries(RaspiCVTest ${OpenCV_LIBS})