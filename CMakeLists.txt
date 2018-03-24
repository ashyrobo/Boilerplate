cmake_minimum_required (VERSION 3.0)
project (visSLAM VERSION 0.0.1)

if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
  message(FATAL_ERROR "In-source builds not allowed. Please make a new directory (called a build directory) and run CMake from there. You may need to remove CMakeCache.txt. ")
endif()

IF(NOT CMAKE_BUILD_TYPE)
  SET(CMAKE_BUILD_TYPE Release)
ENDIF()


MESSAGE("Build type: " ${CMAKE_BUILD_TYPE})
option(BUILD_DOC "Build documentation" ON)

set(CMAKE_CXX_STANDARD 11)

find_package( OpenCV REQUIRED )
find_package( Eigen3 REQUIRED )
find_package( Pangolin REQUIRED )

find_package(Doxygen)

include_directories(
${PROJECT_SOURCE_DIR}
${PROJECT_SOURCE_DIR}/include
${EIGEN3_INCLUDE_DIR}
${Pangolin_INCLUDE_DIRS}
)


set(SOURCE 
src/System.cpp
src/StatUtils.cpp )

add_executable( ${PROJECT_NAME} ${SOURCE} )

target_link_libraries( ${PROJECT_NAME} 
${OpenCV_LIBS} 
${EIGEN3_LIBS}
${Pangolin_LIBRARIES} 
)


# Create 'test' make target using ctest
option(BUILD_TESTS "Build tests." ON)
if(BUILD_TESTS)
    enable_testing()
    add_subdirectory(test)
endif()