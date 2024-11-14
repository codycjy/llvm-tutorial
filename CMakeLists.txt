cmake_minimum_required(VERSION 3.13)
project(kaleidoscope)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 添加这行来消除重复库的警告
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-no_warn_duplicate_libraries")

find_package(LLVM REQUIRED CONFIG)
include_directories(${LLVM_INCLUDE_DIRS})
include_directories(include)
add_definitions(${LLVM_DEFINITIONS})

add_executable(kaleidoscope 
    src/main.cpp
    src/lexer.cpp
    src/parser.cpp
    src/AST.cpp
    src/driver.cpp
)

llvm_map_components_to_libnames(llvm_libs support core irreader)
target_link_libraries(kaleidoscope PRIVATE ${llvm_libs})
