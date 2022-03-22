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
#       Manipulating Variables
#-------------------------------------------------------------------------------------------

# set(NAME Alice)

# set(Alice Bob)

# set(NAMEAliceBob Max)

# message(${NAME})

# message(${${NAME}})

# message(NAME ${NAME} ${${NAME}}) #Here we're logging a concatenation of 3 strings spaced out, w/ 2 strings added by reference

# message(${NAME ${NAME} ${${NAME}}}) # This will generate a Parsing ERROR: 3 spaced out strings can't be a VARIABLE (syntax error)

# message(NAME${NAME}${${NAME}})

# message(${NAME${NAME}${${NAME}}})

# message("NAME ${NAME} ${${NAME}}")

#-------------------------------------------------------------------------------------------
#                  Lists and Strings - Part1
# list(<subcommand> <name of list> ... ... ... <return_variable>)
# subcommands: APPEND, INSERT, REVERSE, SORT, REMOVE_AT, REMOVE_ITEM, REMOVE_DUPLICATES
#-------------------------------------------------------------------------------------------

set(VAR a b c;d "e;f" 2.718 "Hello there") # create a list of 8 items, indexing starts from 0. If index is negative, the indexing starts from the end
message( ${VAR} )
message("-")

message("APPEND:")
list(APPEND VAR 1.6 XX) #
message( ${VAR} )
message(" ")

# message("REMOVE_AT VAR 2 -3:")
# list(REMOVE_AT VAR 2 -3) # remove item from position 2 and -3
# message( ${VAR} )
# message("")

# message("REMOVE_ITEM VAR a 2.718")
# list(REMOVE_ITEM VAR a 2.718) # remove item 2.
# message( ${VAR} )
# message("")

# message("INSERT VAR 2 XX 2.7")
# list(INSERT VAR 2 XX 2.7) # insert at position
# message( ${VAR} )
# message("")

# message("REVERSE VAR")
# list(REVERSE VAR)
# message( ${VAR} )
# message("")

# message("REMOVE_DUPLICATES VAR")
# list(REMOVE_DUPLICATES VAR)
# message( ${VAR} )
# message("")

# message("SORT VAR")
# list(SORT VAR)
# message( ${VAR} )
# message("")

#-------------------------------------------------------------------------------------------
#                  Lists and Strings: PART 2- exercises to STORE ouptuts in another variable
# list(<subcommand> <name of list> ... ... ... <return_variable>)
# subcommands: LENGTH, GET, SUBLIST, JOIN, FIND
#-------------------------------------------------------------------------------------------

list( LENGTH VAR len_var )
list( GET VAR 2 5 6 sub_list )
list( SUBLIST VAR 2 3 sub_list2 )
list( JOIN VAR ++ str_list )
list( FIND VAR XX find_var )

message( "len_var: ${len_var}" )
message( "sub_list: ${sub_list}" )
message( "sub_list2: ${sub_list2}" )
message( "str_list: ${str_list}" )
message( "find_var: ${find_var}" )