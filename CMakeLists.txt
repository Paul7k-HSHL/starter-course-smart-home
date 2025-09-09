cmake_minimum_required(VERSION 3.3)
project(starter_course_smart_home)

set(CMAKE_CXX_STANDARD 23)

add_executable(starter_course_smart_home
        main.cpp
        source/Actor.h
        source/Switch.h
        source/Light.h
)
