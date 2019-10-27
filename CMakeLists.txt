cmake_minimum_required(VERSION 3.15)
project(EmployeeCECS282)

set(CMAKE_CXX_STANDARD 17)

add_executable(EmployeeCECS282 main.cpp Employee.cpp Employee.h Staff.cpp Staff.h Education.cpp Education.h Faculty.cpp Faculty.h Partime.cpp Partime.h)