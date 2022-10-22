file(GLOB_RECURSE HEADERS "Header/*.hpp")
file(GLOB_RECURSE SRC "Source/*.cpp")

add_executable(${PROJECT_NAME} ${HEADERS} ${SRC})