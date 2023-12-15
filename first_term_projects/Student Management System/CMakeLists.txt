cmake_minimum_required(VERSION 3.21)
project(D:\LEARN IN DEPTH\GIT\learn_in_depth\first_term_projects\Student Management System C)

set(CMAKE_C_STANDARD 99)

add_executable(student_mangment main.c student.c student.h FIFO.h FIFO.c APPLICATION.c APPLICATION.h struct.h)
