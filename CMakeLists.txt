cmake_minimum_required(VERSION 3.27)
project(prog3_unit1_3d_object_v2024)

set(CMAKE_CXX_STANDARD 20)

find_package(GTest CONFIG REQUIRED)

add_executable(${PROJECT_NAME}
        Object3D.cpp
        Object3D.h
        Sphere.cpp
        Sphere.h
        SphereTest.cpp)


target_link_libraries(${PROJECT_NAME} PRIVATE GTest::gtest GTest::gtest_main)
