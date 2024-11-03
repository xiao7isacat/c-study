#g++ -E ../src/math.cpp -o math.i
#g++ -S math.i -o math.s
#g++ -c math.s -o math.o
#gcc math.o -o math

cmake_minimum_required (VERSION 3.5)

project (base)

set (MAKE_CXX_FLAGS "${MAKE_CXX_FLAGS} -Wall -Werror ")
set (source_dir "${PROJECT_SOURCE_DIR}/src")
include_directories(include)

file (GLOB source_files "${source_dir}/*.cpp")

add_executable (${PROJECT_NAME}	${source_files})

MESSAGE(STATUS "This is PROJECT_SOURCE_DIR " ${PROJECT_SOURCE_DIR})
MESSAGE(STATUS "This is PROJECT_SOURCE_dir " ${source_dir})
MESSAGE(STATUS "This is PROJECT_SOURCE_Files " ${source_files})
