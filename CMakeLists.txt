cmake_minimum_required(VERSION 3.16)
project(words_count_tbb)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS -pthread)

IF (WIN32)
    FIND_LIBRARY( LibArchive NAMES libarchive.dll )
ELSEIF (APPLE)
    FIND_LIBRARY( LibArchive NAMES libarchive.dylib )
ELSE ()
    FIND_LIBRARY( LibArchive NAMES libarchive.so )
ENDIF ()



add_executable(words_count_tbb src/main.cpp src/read_config.cpp src/read_config.h)