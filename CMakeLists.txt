cmake_minimum_required(VERSION 3.21)
project(algorithm)

set(CMAKE_CXX_STANDARD 11)

#add_library(algorithm leetcode869/solution.cpp)
add_executable(leetcode869 leetcode869/solution.cpp)
add_executable(leetcode970 leetcode970/solution.cpp)
add_executable(unit1_example1_1 JiLinUniversity966/highlevel/unit1_example1_1/example1_1.c)
add_executable(unit_solution1 JiLinUniversity966/highlevel/unit_solution1/solution1.c)

add_executable(2_2_1 JiLinUniversity966/highlevel/unit2/2_2_1/L2_1.c)
add_executable(2_2_2 JiLinUniversity966/highlevel/unit2/2_2_2/L2_2.c)
add_executable(2_2_3 JiLinUniversity966/highlevel/unit2/2_2_3/lt.c)
add_executable(2_2_4 JiLinUniversity966/highlevel/unit2/2_2_4/lt.c)
add_executable(2_2_5 JiLinUniversity966/highlevel/unit2/2_2_5/lt.c)
add_executable(2_2_6 JiLinUniversity966/highlevel/unit2/2_2_6/lt.c)
add_executable(2_2_7 JiLinUniversity966/highlevel/unit2/2_2_7/lt.c)

# 高级程序设计
#2020
add_executable(2020966 JiLinUniversity966/2020966/solution4.cpp)
#2019
add_executable(2019966 JiLinUniversity966/2019966/solution3.cpp)
#2018
add_executable(2018966 JiLinUniversity966/2018966/solution4.c)
#2017
add_executable(2017966 JiLinUniversity966/2017966/solution3.c)
#2016
add_executable(2016966 JiLinUniversity966/2016966/solution4.c)
#2015
add_executable(2015966 JiLinUniversity966/2015966/solution4.c)
#2014
add_executable(2014966 JiLinUniversity966/2014966/solution4.c)

add_executable(leetcode leetcode/test.c)