cmake_minimum_required(VERSION 3.4...3.18)
project(eigen_crash LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable("${PROJECT_NAME}" "src/main.cpp")
target_include_directories("${PROJECT_NAME}" PUBLIC "/Users/petrijvaisanen/projects/eigen-3.4.0")
