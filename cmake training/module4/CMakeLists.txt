cmake_minimum_required(VERSION 3.0.0)

# Cannot use "project(module4 VERSION 1.0.0)" cmd in script mode: it'll generate an error (project command is not scriptable)

# It expects an optional <mode of display> and a <string message>
# To print the msg: cmake -P CMakeLists.txt
# message("Hello World")
#-------------------------------------------------------------------------------------------

# Use of variables. Variables are only string
# Using the Quotes consider the values as a single string;
# Without quotes, we get a list that's displayed as: Bob;Smith
# set(NAME Bob Smith)
# set(HEIGHT 190)
# message("Hi, my name is ${NAME}, My height is ${HEIGHT} cm and my age is ${AGE} years old")

#-------------------------------------------------------------------------------------------

# More Practice on how to dereferencing the Variables
set(NAME Alice)

set(Alice Bob)

set(NAMEAliceBob Max)

# message(${NAME})

# message(${${NAME}})

# message(NAME ${NAME} ${${NAME}}) #Here we're logging a concatenation of 3 strings spaced out, w/ 2 strings added by reference

message(${NAME ${NAME} ${${NAME}}}) # Will generate a Parsing ERROR: 3 spaced out strings can't be a VARIABLE

# message(NAME${NAME}${${NAME}})

# message(${NAME${NAME}${${NAME}}})

# message("NAME ${NAME} ${${NAME}}")
