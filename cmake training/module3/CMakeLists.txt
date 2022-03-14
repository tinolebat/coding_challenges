cmake_minimum_required(VERSION 3.0.0)

project(Calculator_Project VERSION 1.0.0)

# Here when adding sub-directory command, no need to keep the add_library() command
add_subdirectory(my_math_dir)

add_subdirectory(my_print_dir)

add_executable(calculator
main.cpp)

target_link_libraries(calculator my_math my_print)
