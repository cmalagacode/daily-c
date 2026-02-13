add_library(quicksort STATIC quicksort.c)
target_include_directories(quicksort PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(daily_c PRIVATE quicksort)