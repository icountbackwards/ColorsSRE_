cmake_minimum_required(VERSION 3.10)

project(ColorsSRE LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME}
    src/main.c
    src/math_utils.c
    src/pipeline.c
    src/vertex_shader.c
    src/primitive_processing.c
    src/rasterizer.c
    src/fragment_shader.c
    src/objects.c
    src/merger.c
    src/instance.c
    src/window.c
)

set_target_properties(${PROJECT_NAME} PROPERTIES
    OUTPUT_NAME "${PROJECT_NAME}"
)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/include/pipeline
    ${PROJECT_SOURCE_DIR}/external/SDL/include
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    ${PROJECT_SOURCE_DIR}/external/SDL/lib/libSDL3.dll.a
)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    ${PROJECT_SOURCE_DIR}/external/SDL/bin/SDL3.dll
    $<TARGET_FILE_DIR:${PROJECT_NAME}>
)
