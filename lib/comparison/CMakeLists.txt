add_library(compare STATIC compare.c)
target_include_directories(compare PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(daily_c PRIVATE compare)