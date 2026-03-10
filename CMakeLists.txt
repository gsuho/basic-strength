# CMakeLists.txt
cmake_minimum_required(VERSION 3.20)
project(basicStrength)

set(CMAKE_CXX_STANDARD 17)
#C언어인 경우
#set(CMAKE_C_STANDARD 11)

# 하노이 타워 실행 파일 등록 (실행파일이름 폴더명/파일명.cpp)
add_executable(hanoi_run HanoiTower/hanoiTower.cpp)

# 나중에 다른 코드를 추가
