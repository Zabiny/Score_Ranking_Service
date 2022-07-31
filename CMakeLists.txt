# project(xxx)                                          #必须

# add_subdirectory(子文件夹名称)                         #父目录必须，子目录不必

# add_library(库文件名称 STATIC 文件)                    #通常子目录(二选一)
# add_executable(可执行文件名称 文件)                     #通常父目录(二选一)

# include_directories(路径)                              #必须
# link_directories(路径)                                 #必须

# target_link_libraries(库文件名称/可执行文件名称 链接的库文件名称)       #必须
# set(APP_SRC main.cpp)
project(KV_store)
aux_source_directory(. APP_SRC)


add_subdirectory(skiplist_lib)
add_executable(kv_store ${APP_SRC})

target_link_libraries(kv_store Skiplist_base)