project(mimium_import_example)

# if you failed to find mimium package in a configure step, manually import config.cmake included in "share" folder in distribution.
# include(/usr/local/share/cmake/mimium/mimium-config.cmake)

find_package(mimium REQUIRED)

add_executable(mimium_libimport main.cpp)

target_link_libraries(mimium_libimport PRIVATE mimium::mimium mimium::mimium_cli)