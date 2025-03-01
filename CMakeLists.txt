cmake_minimum_required(VERSION 3.25)

# Use packagename_ROOT for FindPackage.
if(POLICY CMP0074)
    cmake_policy(SET CMP0074 NEW)
endif()

# Disable default MSVC setting CRT type so we can set it ourselves.
if(POLICY CMP0091)
    cmake_policy(SET CMP0091 NEW)
endif()

# Disable default MSVC warning level so we can set it ourselves.
if(POLICY CMP0092)
    cmake_policy(SET CMP0092 NEW)
endif()

# Allow specifying MSVC debug configurations.
#if(POLICY CMP0141)
#    cmake_policy(SET CMP0141 NEW)
#endif()

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

include(FeatureSummary)
include(CMakeDependentOption)

# We don't support in tree builds, so help people make the right choice.
if (CMAKE_BINARY_DIR STREQUAL CMAKE_SOURCE_DIR)
    message(FATAL_ERROR "Building in-source is not supported! Create a build dir and remove ${CMAKE_SOURCE_DIR}/CMakeCache.txt")
endif()

# Top level project, for old thyme sake :D
project(thyme LANGUAGES C CXX)

# Set where the build results will end up
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# Find/Add build dependencies and stubs shared by all projects
if((WIN32 OR "${CMAKE_SYSTEM}" MATCHES "Windows") AND ${CMAKE_SIZEOF_VOID_P} EQUAL 4)
    add_subdirectory(Dependencies/BinkStub)
    add_subdirectory(Dependencies/MilesStub)
    add_subdirectory(Dependencies/STLPort)
endif()

include(FetchContent)
set(GS_OPENSSL FALSE)

FetchContent_Declare(
    gamespy
    GIT_REPOSITORY https://github.com/TheAssemblyArmada/GamespySDK.git
    GIT_TAG        6f83d85d6d2e2d9a430301aeef5134578d0ecfcd
)
FetchContent_MakeAvailable(gamespy)

# Do we want to build extra SDK stuff or just the game binary?
option(THYME_ZEROHOUR_PROJECT "Build Zero Hour code." ON)
option(THYME_GENERALS_PROJECT "Build Generals code." OFF) # TODO

if(NOT THYME_ZEROHOUR_PROJECT AND NOT THYME_GENERALS_PROJECT)
    set(THYME_ZEROHOUR_PROJECT TRUE)
    message("You must select one project to build, building Zero Hour by default.")
endif()

add_feature_info(ZeroHourStuff THYME_ZEROHOUR_PROJECT "Build Zero Hour code")
add_feature_info(GeneralsStuff THYME_GENERALS_PROJECT "Build Generals code")

# Add main build targets
if(THYME_ZEROHOUR_PROJECT)
    add_subdirectory(GeneralsMD)
endif()

if(THYME_GENERALS_PROJECT)
    add_subdirectory(Generals)
endif()

feature_summary(WHAT ENABLED_FEATURES DESCRIPTION "Enabled features:")
feature_summary(WHAT DISABLED_FEATURES DESCRIPTION "Disabled features:")
