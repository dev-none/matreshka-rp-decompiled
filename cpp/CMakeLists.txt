cmake_minimum_required(VERSION 3.16)
project(matreshka_client_core LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(MATRESHKA_ANDROID "Build shared native library for Android JNI" OFF)
option(MATRESHKA_BUILD_TESTS "Build standalone C++ smoke tests" ON)

set(MATRESHKA_SOURCES
    src/protocol/bitstream.cpp
    src/network/rpc_client.cpp
    src/security/integrity.cpp
    src/bootstrap/cdn_client.cpp
    src/jni/native_bridge.cpp
)

if(MATRESHKA_ANDROID)
    add_library(matreshka SHARED ${MATRESHKA_SOURCES})
    target_include_directories(matreshka PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
    target_compile_options(matreshka PRIVATE -Wall -Wextra -Wpedantic)
    target_link_libraries(matreshka PRIVATE android log EGL GLESv2)
else()
    add_library(matreshka_core STATIC ${MATRESHKA_SOURCES})
    target_include_directories(matreshka_core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
    if(MSVC)
        target_compile_options(matreshka_core PRIVATE /W4)
    else()
        target_compile_options(matreshka_core PRIVATE -Wall -Wextra -Wpedantic)
    endif()

    if(MATRESHKA_BUILD_TESTS)
        add_executable(matreshka_smoke_test tests/smoke_test.cpp)
        target_link_libraries(matreshka_smoke_test PRIVATE matreshka_core)
    endif()
endif()
