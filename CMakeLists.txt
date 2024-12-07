cmake_minimum_required(VERSION 3.10)
project(WebServer)

set(CMAKE_CXX_STANDARD 17)

add_executable(chantierplusplus src/main.cpp src/Autres/adresse.cpp src/Ouvrier/ouvrier.cpp src/Chef/chef.cpp)

target_link_libraries(chantierplusplus)
