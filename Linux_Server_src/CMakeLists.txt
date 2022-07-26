set(SRCS
    Channel.cc
    Epoll.cc
    EventLoop.cc
    EventLoopThread.cc
    EventLoopThreadPool.cc
    HttpConn.cc
    HttpRequest.cc
    HttpResponse.cc
    Main.cpp
    Server.cc
    Timer.cc
    Util.cc
)
add_library(webserver_base ${SRCS})


target_link_libraries(WebServer_base libserver_base)
set_target_properties(WebServer_base PROPERTIES OUTPUT_NAME "webserver_base")

add_subdirectory(base)
add_subdirectory(tests)