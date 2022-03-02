cmake_minimum_required(VERSION 3.18)
project(error-code)

add_executable(sample 
    ${PROJECT_SOURCE_DIR}/src/flights.cc
    ${PROJECT_SOURCE_DIR}/src/flights.hpp
    ${PROJECT_SOURCE_DIR}/src/seats.cc
    ${PROJECT_SOURCE_DIR}/src/seats.hpp
    ${PROJECT_SOURCE_DIR}/src/main.cc
    ${PROJECT_SOURCE_DIR}/src/queries.cc
    ${PROJECT_SOURCE_DIR}/src/queries.hpp
    )

target_link_libraries(sample)

target_compile_features(sample PRIVATE cxx_std_20)

set_target_properties(sample PROPERTIES LINKER_LANGUAGE CXX)