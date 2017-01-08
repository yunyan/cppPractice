enable_testing()

set(TEST_FILES 
    gtest_main.cpp 
    CDatabase_test.cpp
    )

include_directories(${PROJECT_BINARY_DIR}/googletest-src/googletest/include)
include_directories(${PROJECT_SOURCE_DIR}/inc)

add_executable(myproj_ut ${TEST_FILES})
target_link_libraries(myproj_ut gtest)
link_directories(${PROJECT_SOURCE_DIR}/src)
target_compile_features(myproj_ut PRIVATE cxx_range_for)

#set(LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)