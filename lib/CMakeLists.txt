set(SOURCE_FILES src/piezo.cpp)
set(INCLUDE_FILES include/piezo.h)
set(TEST_FILES test/piezo.cpp)

add_library(piezo SHARED ${SOURCE_FILES} ${INCLUDE_FILES})
target_include_directories(piezo PUBLIC include)

if(BUILD_TESTS MATCHES ON)
    add_executable(piezo-test ${TEST_FILES})
    target_link_libraries(piezo-test piezo)
endif()
