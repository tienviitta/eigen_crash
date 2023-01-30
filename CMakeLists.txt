cmake_minimum_required(VERSION 3.4...3.18)
project(eigen_crash LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# add_compile_options(-Wall -Weffc++ -Wextra -Wsign-conversion -pedantic -Werror)
add_compile_options(-Wall -Wextra -pedantic -Werror)

# include(FetchContent)
# FetchContent_Declare(
#   daw_json_link
#   GIT_REPOSITORY https://github.com/beached/daw_json_link
#   GIT_TAG release
# )
# FetchContent_MakeAvailable(daw_json_link)

include(FetchContent)
FetchContent_Declare(json URL https://github.com/nlohmann/json/releases/download/v3.11.2/json.tar.xz)
FetchContent_MakeAvailable(json)
FetchContent_Declare(eigen URL https://gitlab.com/libeigen/eigen/-/archive/3.4.0/eigen-3.4.0.tar)
FetchContent_MakeAvailable(eigen)

add_executable("${PROJECT_NAME}" "src/main.cpp")
target_link_libraries("${PROJECT_NAME}" PRIVATE nlohmann_json::nlohmann_json eigen)
# target_include_directories("${PROJECT_NAME}" PUBLIC "/Users/petrijvaisanen/projects/eigen-3.4.0")
