set(LIB_SRC
    skiplist.cc)

add_library(skiplist_base ${LIB_SRC})

set_target_properties(skiplist_base PROPERTIES OUTPUT_NAME "SkipList_base")

add_subdirectory(tests)