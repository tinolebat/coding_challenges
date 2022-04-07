cmake_minimum_required(VERSION 3.0.0)

# if else loop
# set(VAR OFF)

# set(VAR2 VAR)

# if(VAR2)     # IF loop is only looking whether the strings is empty or not. If empty condition is False  
#     message("If block executed")
# else()
#     message("Else block")
# endif()

# ------ ------------------------------------------
# Unary Test: use to check whether something exists or not --------
# DEFINED (check if variable is defined or not), COMMAND (check if command is defined or not), EXITS
# ------  ------------------------------------

# set(Name Alice)

# if(DEFINED Name)
#     message("Name is defined")
# else()
#     message("Name is not defined")
# endif()

# if(COMMAND target_link_libraries) # do not add parentheses at the end of the command
#     message("is a COMMAND")
# else()
#     message("is NOT a COMMAND")
# endif()

# using EXITS command
# if(EXISTS /home/jone/Desktop/leetcode/cmake\ training/module5/CMakeLists.txt) 
#     message("does EXISTS.")
# else()
#     message("Does NOT EXISTS")
# endif()

# Looping commands
# set(VAR a)
# while(NOT VAR STREQUAL "aaaaaa")
#     set(VAR ${VAR}a)
#     message(${VAR})
# endwhile()

# <------ Foreach Loop ---->
# foreach(Name Alice Bob Mark) # same with foreach(Name Alice;Bob;Mark)
#     message(${Name})    
# endforeach()

# foreach(x RANGE 100 105)
#     message("Person ${x}")
# endforeach()

# Iterator
# set(VAR1 0;1)
# set(VAR2  2 3) 
# set(VAR3 "4 5") # by writing < VAR3 "4;5" >, we are creating a list of 2 items 

# foreach(x IN LISTS VAR1 VAR2 VAR3)
#     message("x = ${x}")
# endforeach()

# -------------------------------------- FUNCTIONS ----------------------------------
# **Case1:

# function(print_detail nameVar) # function(print_detail): use this format if function doesn't take an argument
#     message("My name is ${nameVar}")
# endfunction()

# set(VAR John)

# print_detail(${VAR}) # Without data fencing the Variable, the func. will print the variable name ("VAR"), but not the value

# **Case2:

# function(print_detail nameVar) 
#     message("My name is ${${nameVar}}")
# endfunction()

# set(VAR John)
# print_detail(VAR) # Data fencing already done in the function definition. No need for it here

# **case3: Optional arguments (Special arguments: ARGC, ARGN, ARGVO, ...)

function(print_detail nameVar) 
    message("My name is ${${nameVar}}")
    if(DEFINED ARGV1) # To print the optional argument, print Special argument ARGV1
        message("[With Optional Argument] My Name is ${ARGV1}")
    endif()

    message("ARGC = ${ARGC}")
    message("ARGV = ${ARGV}")
    message("ARGN = ${ARGN}")

    if(DEFINED ARGV0) # TO print the optional argument, print Special argument ARGV1
        message("[With Optional Argument] My Name is ${ARGV0}")
    endif()
    if(DEFINED ARGV1) # TO print the optional argument, print Special argument ARGV1
        message("[With Optional Argument] My Name is ${ARGV1}")
    endif()
    if(DEFINED ARGV2) # TO print the optional argument, print Special argument ARGV1
        message("[With Optional Argument] My Name is ${ARGV2}")
    endif()
    if(DEFINED ARGV3) # TO print the optional argument, print Special argument ARGV1
        message("[With Optional Argument] My Name is ${ARGV3}")
    endif()

endfunction()

set(VAR John)
print_detail(VAR Bob Alice Mark) #Here Bob is an optional argument; output is the same as above. 