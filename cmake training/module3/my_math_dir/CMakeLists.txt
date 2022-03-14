add_library(my_math
src/add.cpp     # We make sure the correct path for .cpp files in src folder is mentioned 
src/div.cpp)


# We use this cmd to avoid MENTIEONNING the EXACT path to each .cpp file in "#include" directive 
# This cmd can only be used AFTER the target library was already added above.
target_include_directories(my_math PUBLIC include)