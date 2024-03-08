cmake_minimum_required(VERSION 3.23.2)
project(CECT VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

find_package(Freetype)

set(SRC_FILES

    src/Main.cpp
    src/Font.cpp
    src/ContentLoader.cpp
)

add_executable(CECT ${SRC_FILES})
target_include_directories(CECT PRIVATE "${CMAKE_SOURCE_DIR}/include" ${FREETYPE_INCLUDE_DIRS})
target_link_libraries(CECT PRIVATE ${FREETYPE_LIBRARIES})