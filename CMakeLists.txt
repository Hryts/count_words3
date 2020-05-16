CMAKE_MINIMUM_REQUIRED(VERSION 3.10)
PROJECT(count_words3)

SET(CMAKE_CXX_STANDARD 17)
SET(CMAKE_CXX_FLAGS -pthread)
SET(CMAKE_CXX_FLAGS -lboost_filesystem)
SET(CMAKE_CXX_FLAGS -lboost_system)


FIND_PACKAGE( Boost REQUIRED COMPONENTS filesystem locale)
find_package(TBB REQUIRED COMPONENTS tbb OPTIONAL_COMPONENTS malloc)
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} ${TBB_INCLUDE_DIRS})

IF (WIN32)
    FIND_LIBRARY( LibArchive NAMES libarchive.dll )
ELSEIF (APPLE)
    FIND_LIBRARY( LibArchive NAMES libarchive.dylib )
ELSE ()
    FIND_LIBRARY( LibArchive NAMES libarchive.so )
ENDIF ()


ADD_EXECUTABLE (count_words3
        #        src/count_words_boost.cpp
        #        src/count_words_boost.h
        src/main.cpp
        #        src/merge.cpp
        #        src/merge.h
                src/read_config.cpp
                src/read_config.h
        #        src/read_disk.cpp
        #        src/read_disk.h
        #        src/my_concurrent_queue.h
        #        src/write_result.cpp
        #        src/write_result.h
        #        #        src/unpack.cpp
        #        #        src/unpack.h
        #        src/merge_all.cpp
        #        src/merge_all.h
        #        src/is_poisoned.cpp
        #        src/is_poisoned.h
        )

TARGET_LINK_LIBRARIES (count_words3 ${LibArchive} ${Boost_LIBRARIES} TBB::tbb)
TARGET_INCLUDE_DIRECTORIES (count_words3 PRIVATE ${Boost_INCLUDE_DIRS} ${TBB_INCLUDE_DIRS})