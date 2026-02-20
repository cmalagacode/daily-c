add_library(random_stuff STATIC random_stuff.c)
target_include_directories(random_stuff PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(daily_c PRIVATE random_stuff)