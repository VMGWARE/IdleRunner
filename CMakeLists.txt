cmake_minimum_required(VERSION 3.10)

# Define the project and the required C++ standard
project(idlerunner)
set(CMAKE_CXX_STANDARD 17)

# Collect all source files in src and src/utils
file(GLOB_RECURSE SOURCES "src/*.cpp" "src/utils/*.cpp")

# Add the executable and set the sources
add_executable(idlerunner ${SOURCES})

# If you had any external libraries, you would link them here. 
# For example:
# find_package(SomeLibrary REQUIRED)
# target_link_libraries(idlerunner PRIVATE SomeLibrary::SomeLibrary)

# Optionally set the installation path
install(TARGETS idlerunner DESTINATION bin)
