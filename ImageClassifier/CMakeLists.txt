file(GLOB_RECURSE HEADERS "Header/*.hpp")
file(GLOB_RECURSE SRC "Source/*.cpp")

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

add_executable( ${PROJECT_NAME} ${HEADERS} ${SRC} )

add_subdirectory(third_party/opencv/include)

target_include_directories( ${PROJECT_NAME} PUBLIC third_party/opencv/include )

target_link_libraries(${PROJECT_NAME} ${CMAKE_BINARY_DIR}/bin/Debug )