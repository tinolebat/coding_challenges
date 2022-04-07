cmake_minimum_required(VERSION 3.0.0)

message("Inside SubDirectory: Before modif: ${Name}")
set(Name Nivea PARENT_SCOPE)
message("Inside SubDirectory: After modif. : ${Name}")