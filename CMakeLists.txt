cmake_minimum_required(VERSION 3.0.0)
project(E_Sphere VERSION 0.1.0)

include(CTest)
enable_testing(true)

#Test classes#
add_library(Test_Cases Test_Cases.c)
add_library(Assertions Assertions.c)
add_library(Debug_Lib Debug_Lib.c)

#Header files#
add_library(E_Sphere E_Sphere.h)
add_library(Pyramid Pyramid.h)
add_library(Torus Torus.h)
add_library(Cuboids Cuboids.h)
add_library(Rhombus Rhombus.h)
add_library(Lon_Lat_Hoz Lon_Lat_Hoz.h)

#Middleware#

#Interface#

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)