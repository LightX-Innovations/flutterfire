cmake_minimum_required(VERSION 3.14)
project(firebase_auth LANGUAGES C CXX)

# Name of the plugin binary.
set(PLUGIN_NAME "firebase_auth_plugin")

# Plugin source files.
list(APPEND PLUGIN_SOURCES
  "firebase_auth_plugin.cpp"
  "messages.g.cc"
)

# Optional: parse version from pubspec.yaml (if needed for headers or logic).
file(STRINGS "../pubspec.yaml" pubspec_content)
foreach(line ${pubspec_content})
  string(FIND ${line} "version: " has_version)
  if("${has_version}" STREQUAL "0")
    string(FIND ${line} ": " version_start_pos)
    math(EXPR version_start_pos "${version_start_pos} + 2")
    string(LENGTH ${line} version_end_pos)
    math(EXPR len "${version_end_pos} - ${version_start_pos}")
    string(SUBSTRING ${line} ${version_start_pos} ${len} PLUGIN_VERSION)
    break()
  endif()
endforeach()

# Configure a version header (optional)
configure_file(plugin_version.h.in ${CMAKE_BINARY_DIR}/generated/firebase_auth/plugin_version.h)
include_directories(${CMAKE_BINARY_DIR}/generated/)

# Define the plugin shared library
add_library(${PLUGIN_NAME} SHARED
  # "firebase_auth_plugin.cc"
  ${PLUGIN_SOURCES}
  ${CMAKE_BINARY_DIR}/generated/firebase_auth/plugin_version.h
)

# Export symbols for Linux
target_compile_definitions(${PLUGIN_NAME} PRIVATE FLUTTER_PLUGIN_IMPL)

# Include plugin headers
target_include_directories(${PLUGIN_NAME} PUBLIC
  "${CMAKE_CURRENT_SOURCE_DIR}"
  "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

# Link against Flutter
target_link_libraries(${PLUGIN_NAME} PRIVATE flutter)

# Bundle any native libs (empty for now)
set(firebase_auth_bundled_libraries
  ""
  PARENT_SCOPE
)
