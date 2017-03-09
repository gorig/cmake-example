set(SOURCE_FILES src/main.cpp)

add_executable(piezo-cli ${SOURCE_FILES})
target_link_libraries(piezo-cli piezo)
