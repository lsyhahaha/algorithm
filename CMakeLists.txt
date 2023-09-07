cmake_minimum_required(VERSION 3.21)
project(algorithm)

set(CMAKE_CXX_STANDARD 11)

#学习STL库
add_executable(STL STL/learn_vector.cpp)

#湖南师范大学
add_executable(2022 HNShiFan/2022/solution1.cpp)

#湖南大学
add_executable(HNuniversity866 HNuniversity866/2022/solution1.cpp HeadFile/tree.h)

#王道
add_executable(WangDaoP18 WangDao2023/WangDaoP18/solution2.cpp)

#测试头文件的正确性
add_executable(Test HeadFile/tree.h HeadFile/TestTree.cpp)