set(SRCFILE 
    database.cpp 
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

add_executable(myproj ${SRCFILE})
target_link_libraries(myproj mysqlcppconn)

