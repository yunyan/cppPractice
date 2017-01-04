set(SRCFILE CDatabase.cpp main.cpp)

include_directories("/usr/local/include/")
include_directories("../inc/")
link_directories("/usr/local/lib/libmysqlcppconn")

add_executable(myproj ${SRCFILE})
target_compile_features(myproj PRIVATE cxx_range_for)
target_link_libraries(myproj mysqlcppconn)


