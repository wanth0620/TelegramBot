cmake_minimum_required(VERSION 3.5)

project(TelegramBot)

set (CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(
    "${CMAKE_CURRENT_SOURCE_DIR}/external/"
)
add_subdirectory(external/curlpp)
add_subdirectory(src)
