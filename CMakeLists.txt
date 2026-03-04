cmake_minimum_required(VERSION 3.16)
project(mlcpp LANGUAGES CXX)

# using c++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# pull deps
find_package(Eigen3 REQUIRED NO_MODULE)

# set targets
add_library(mlcpp INTERFACE)
target_include_directories(mlcpp INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)
target_link_libraries(mlcpp INTERFACE Eigen3::Eigen)
