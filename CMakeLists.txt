cmake_minimum_required(VERSION 3.17)
project(954604)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(tests)

add_executable(954604
    tests/test1.cpp
    tests/test10.cpp
    tests/test11.cpp
    tests/test12.cpp
    tests/test2.cpp
    tests/test3.cpp
    tests/test4.cpp
    tests/test5.cpp
    tests/test6.cpp
    tests/test7.cpp
    tests/test8.cpp
    tests/test9.cpp
    tests/testall.cpp
    area.cpp
    area.h
    areas.cpp
    areas.h
    bethyw.cpp
    bethyw.h
    datasets.h
    input.cpp
    input.h
    lib_catch.hpp
    lib_catch_main.cpp
    lib_cxxopts.hpp
    lib_cxxopts_argv.hpp
    lib_json.hpp
    main.cpp
    measure.cpp
    measure.h)
