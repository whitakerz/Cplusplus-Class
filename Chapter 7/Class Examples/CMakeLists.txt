cmake_minimum_required(VERSION 4.0)
project(Class_Examples)

set(CMAKE_CXX_STANDARD 20)

add_executable(Class_Examples oldmain.cpp
        BankAccount.cpp
        main.cpp
        Rectangle.h
        Rectangle.cpp
)
