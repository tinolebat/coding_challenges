cmake_minimum_required(VERSION 3.0.0)

# if else loop
set(VAR OFF)

set(VAR2 VAR)

if(VAR2)     # IF loop is only looking whether the strings is empty or not. If empty condition is False  
    message("If block executed")
else()
    message("Else block")
endif()