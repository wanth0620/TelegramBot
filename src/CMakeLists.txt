cmake_minimum_required(VERSION 3.10)

project(TelegramBot)


set (TARGET_NAME "TelegramBot")

file (GLOB MAIN_SRC
        ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
        )

file (GLOB MAIN_HEADERS
        ${CMAKE_CURRENT_SOURCE_DIR}/*.h
        )

add_executable (${TARGET_NAME} ${MAIN_SRC} ${MAIN_HEADERS})

