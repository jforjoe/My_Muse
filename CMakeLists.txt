cmake_minimum_required(VERSION 3.0.0)
project(My_muse VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17) 

include(CTest)
enable_testing()

add_executable(My_muse main.cpp)

# Add the path to your external library's header files
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Dependencies/include)

target_link_libraries(My_muse ${CMAKE_CURRENT_SOURCE_DIR}/Dependencies/lib/libtag.so) 

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)