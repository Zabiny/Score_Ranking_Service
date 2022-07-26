set(SRCS
    Main.cc
)
include_directories(${PROJECT_SOURCE_DIR}/base)


add_executable(WebServer ${SRCS})

add_subdirectory(webserver_base)
add_subdirectory(skiplist_base)