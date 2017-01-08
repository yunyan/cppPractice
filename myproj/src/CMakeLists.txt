set(SRCFILE 
    CDatabase.cpp 
    main.cpp
  )

set(INCLUDEDIR ${INCLUDEDIR} 
    /usr/local/include/ 
    ../inc/
   )

set(LIBDIR ${LIBDIR} 
    /usr/local/lib/libmysqlcppconn
    )

include_directories(${INCLUDEDIR})
link_directories(${LIBDIR})


#include_directories("/usr/local/include/")
#include_directories("../inc/")
#ink_directories("/usr/local/lib/libmysqlcppconn")

add_executable(myproj ${SRCFILE})
target_compile_features(myproj PRIVATE cxx_range_for)
target_link_libraries(myproj mysqlcppconn)

if(NOT EXISTS ${PROJECT_BINARY_DIR}/bin})
  file(MAKE_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
endif()


#add_executable(myproj_test gtest_main.cpp)
#link_directories(${PROJECT_BINARY_DIR}/lib)
#target_link_libraries(myproj_test gtest myproj_ut)

set (EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)