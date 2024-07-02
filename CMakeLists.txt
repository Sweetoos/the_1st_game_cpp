cmake_minimum_required(VERSION 3.20)
project(run)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${PROJECT_SOURCE_DIR}/src)

set(SOURCES
    src/main.cpp
    src/character.cpp
    src/human.cpp
    src/weapon.cpp    
    src/menu.cpp
    src/elf.cpp
)

set(HEADERS
    src/character.hpp
    src/entity.hpp
    src/human.hpp
    src/main.hpp
    src/weapon.hpp    
    src/menu.hpp
    src/elf.hpp
)
add_executable(run ${SOURCES} ${HEADERS})
