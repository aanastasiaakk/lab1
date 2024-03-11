cmake_minimum_required(VERSION 3.26)
project(labs2)

set(CMAKE_CXX_STANDARD 17)

add_executable(labs2 main.cpp
        Vehicle.cpp
        Vehicle.h
        Parkingticket.cpp
        Parkingticket.h
        User.cpp
        User.h
        Car.cpp
        Car.h
        Truck.cpp
        Truck.h
        Address.cpp
        Address.h
)
