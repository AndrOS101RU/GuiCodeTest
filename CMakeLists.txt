cmake_minimum_required (VERSION 3.0)
project (GuiCodeTest)

set (CMAKE_CXX_STANDARD 20)

add_subdirectory(libs)

set(SRC "${GuiCodeTest_SOURCE_DIR}/")

file(GLOB_RECURSE SOURCE
  "${SRC}source/*.cpp"
  "${SRC}include/*.hpp"
)

add_executable(GuiCodeTest
  ${SOURCE}
)

target_include_directories(GuiCodeTest PUBLIC
  libs/GuiCode2/include
  libs/GuiCode2/libs
  include/
)

source_group(TREE ${SRC} FILES ${SOURCE})

target_precompile_headers(GuiCodeTest PUBLIC
  "${SRC}include/pch.hpp"
)

target_link_libraries(GuiCodeTest
  GuiCode2
)