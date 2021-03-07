cmake_minimum_required(VERSION 3.2)
project(yskipproject)

# Look for source files

file(GLOB YSKIP_CPP src/*.cpp)
file(GLOB YSKIP_HPP src/*.h)

set(CMAKE_CXX_FLAGS "-s EXPORT_ALL=1 -s USE_PTHREADS=1")

# add_executable(yskip_exec ${YSKIP_CPP} ${YSKIP_HPP})
# target_link_libraries(yskip_exec pthread)
add_library(yskip ${YSKIP_CPP} ${YSKIP_HPP})
target_link_libraries(yskip pthread)
target_link_options(yskip PUBLIC "--shared-memory -pthread -s USE_PTHREADS=1")


