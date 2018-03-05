cmake_minimum_required (VERSION 3.0)

project (visSLAM)

find_package( OpenCV REQUIRED )

set(SOURCE 
src/System.cpp )

add_executable( ${PROJECT_NAME} ${SOURCE} )

target_link_libraries( ${PROJECT_NAME} ${OpenCV_LIBS} )