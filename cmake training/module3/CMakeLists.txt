cmake_minimum_required(VERSION 3.0.0)

project(Calculator_Project VERSION 1.0.0)

# Here we can add sub-directories to the build tree by using add_subdirectory command,
# Then no need to keep the add_library() commands here.
# CmakeLists.txt must be added in each sub-directory so that the Top-est level CmakeLists.txt
# can find each of them and execute them 1 by 1.
# The add_library() commands will be added to each separate sub-directory in their 
add_subdirectory(my_math)

add_subdirectory(my_print)

add_executable(calculator
main.cpp)

target_link_libraries(calculator my_math my_print)
