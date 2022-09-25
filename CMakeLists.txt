cmake_minimum_required(VERSION 3.21)
project(algorithm)

set(CMAKE_CXX_STANDARD 11)

#TOOL
add_executable(array TOOL/array/LinJieJuZhen.c)

#王道
add_executable(XianXingBiao JiLinUniversity966/XianXingBiao/solution1_4.c)

#2019 941
add_executable(2019941 JiLinUniversity941/2019941/solution1.cpp)
#2018 941
add_executable(2018941 JiLinUniversity941/2018941/solution1.cpp)
#2017 941
add_executable(2017941 JiLinUniversity941/2017941/solution1.cpp)
#2014 941
add_executable(2014941 JiLinUniversity941/2014941/solution1.cpp)

#2018 979
add_executable(2018979 JiLinUniversity979/2018979/solution3.cpp)
#2017 979
add_executable(2017979 JiLinUniversity979/2017979/solution1.cpp)

#2019 967
add_executable(2019967 JiLinUniversity967/2019967/solution5.cpp)
#2018 967
add_executable(2018967 JiLinUniversity967/2018967/solution2.c)
#2017 967
add_executable(2017967 JiLinUniversity967/2017967/solution6.cpp)
#2015 967
add_executable(2015967 JiLinUniversity967/2015967/solution4.cpp)


# 高级程序设计
#2020 966
add_executable(2020966 JiLinUniversity966/2020966/solution4.cpp)
#2019 966
add_executable(2019966 JiLinUniversity966/2019966/solution3.cpp)
#2018 966
add_executable(2018966 JiLinUniversity966/2018966/solution7.cpp)
#2017 966
add_executable(2017966 JiLinUniversity966/2017966/solution5.cpp)
#2016 966
add_executable(2016966 JiLinUniversity966/2016966/solution4.c)
#2015 966
add_executable(2015966 JiLinUniversity966/2015966/solution4.c)
#2014 966
add_executable(2014966 JiLinUniversity966/2014966/solution4.c)