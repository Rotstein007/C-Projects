find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(create_window main.c)
target_link_libraries(create_window ${SDL2_LIBRARIES})