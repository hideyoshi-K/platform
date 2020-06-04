cmake_minimum_required(VERSION 3.5)
project(platform)
set(CMAKE_CXX_FLAGS "-Wall -std=c++14")

include_directories(include)
add_executable(main sample/main.cpp)

add_library(platform SHARED src/platform.cpp)
target_link_libraries(main platform)

## Thread
find_package(Threads REQUIRED)
target_link_libraries(main Threads::Threads)

## OpenCV
# find_package(OpenCV REQUIRED)
# if(OpenCV_FOUND)
#   include_directories(${OpenCV_INCLUDE_DIRS})
#   target_link_libraries(main ${OpenCV_LIBRARIES})
# endif()
