cmake_minimum_required(VERSION 3.11)
cmake_policy(SET CMP0072 NEW)
project(GameProject)

# Set C++ standard and compiler flags
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

# Find necessary libraries (OpenGL, GLEW, GLFW)
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)

# Include directories for OpenGL, GLEW, GLFW
include_directories(${OPENGL_INCLUDE_DIRS} ${GLEW_INCLUDE_DIRS} ${GLFW_INCLUDE_DIRS})

# Source files
set(SRCS main.cpp)

# Add executable target
add_executable(game.elf ${SRCS})

# Link libraries to the executable
target_link_libraries(game.elf ${OPENGL_LIBRARIES} ${GLEW_LIBRARIES} glfw)

# Set output to build/bin
set_target_properties(game.elf PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

# Define a 'clean' target (optional)
add_custom_target(clean-all
    COMMAND ${CMAKE_BUILD_TOOL} clean
    COMMAND ${CMAKE_COMMAND} -P "${CMAKE_MODULE_PATH}/cmake/clean-all.cmake"
)

