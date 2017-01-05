set(TEST_FILES ${TEST_FILES}
    database_test.cpp
    )

SET(INCLUDE_DIR ${PROJECT_BINARY_DIR}/googletest-src/googletest/include 
                ${PROJECT_SOURCE_DIR}/inc
                )

include_directories(${INCLUDE_DIR})

set(LIBDIR ${LIBDIR} 
    /usr/local/lib/libmysqlcppconn
    )

link_directories(${LIBDIR})

# Generate taragets
foreach(f ${TEST_FILES})
   string(REPLACE "_test.cpp" ".cpp" SRC_FILE ${f})
   set(SRC_FILES ${CMAKE_SOURCE_DIR}/src/${SRC_FILE})
   string(REPLACE ".cpp" "" TEST_BIN_FILE ${f})
   add_executable(${TEST_BIN_FILE} ${TEST_FILES} ${SRC_FILES})
   string(COMPARE EQUAL ${TEST_BIN_FILE} "database_test" NEEDDBLIB)
   if(${NEEDDBLIB})
    target_link_libraries(${TEST_BIN_FILE} gtest gtest_main mysqlcppconn)
   else()
    target_link_libraries(${TEST_BIN_FILE} gtest gtest_main)
   endif()

# run testing binaries
   add_test(NAME ${TEST_BIN_FILE} 
            COMMAND ${TEST_BIN_FILE}
            )

endforeach()

