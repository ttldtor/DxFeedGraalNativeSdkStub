# Copyright (c) 2024 Devexperts LLC.
# SPDX-License-Identifier: MPL-2.0

cmake_minimum_required(VERSION 3.21)

if (POLICY CMP0092)
    cmake_policy(SET CMP0092 NEW)
endif ()

if (POLICY CMP0135)
    cmake_policy(SET CMP0135 NEW)
endif ()

set(CMAKE_POLICY_DEFAULT_CMP0077 NEW)

project(DxFeedGraalNativeSdk)

set(DXFG_VERSION "1.1.21" CACHE STRING "")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CXX_EXTENSIONS OFF)
set(C_EXTENSIONS OFF)

if (NOT DEFINED DXFG_IS_ROOT_PROJECT)
    if (CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
        set(DXFG_IS_ROOT_PROJECT ON)
        message(STATUS "CMake version: ${CMAKE_VERSION}")
    else ()
        set(DXFG_ROOT_PROJECT OFF)
    endif ()
endif ()

option(DXFG_INSTALL "Prepare install" ON)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(${PROJECT_NAME} SHARED library.cpp)
add_library(dxfg ALIAS ${PROJECT_NAME})

target_compile_definitions(${PROJECT_NAME} PUBLIC DXFG_VERSION="${DXFG_VERSION}")
target_include_directories(${PROJECT_NAME} PUBLIC .)

if (DXFG_INSTALL)
    include(GNUInstallDirs)
    set(CPACK_OUTPUT_CONFIG_FILE "${CMAKE_BINARY_DIR}/${PROJECT_NAME}PackConfig.cmake")
    set(CPACK_SOURCE_GENERATOR ZIP)
    set(CPACK_PACKAGE_VENDOR "Devexperts LLC")
    set(CPACK_PACKAGE_NAME "${PROJECT_NAME}")
    set(CPACK_PACKAGE_VERSION "${DXFG_VERSION}")
    set(CPACK_PACKAGE_FILE_NAME "${PROJECT_NAME}-${DXFG_VERSION}-${DXFG_TARGET_PLATFORM}${DXFG_PACKAGE_SUFFIX}")
    include(CPack)

        #install(FILES $<TARGET_PDB_FILE:${PROJECT_NAME}> DESTINATION bin OPTIONAL)
        install(TARGETS ${PROJECT_NAME})
        install(DIRECTORY "." DESTINATION "." PATTERN "build" EXCLUDE)

    install(FILES "LICENSE" DESTINATION ".")
endif ()