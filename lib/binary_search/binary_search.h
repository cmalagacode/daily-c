#ifndef BINARY_SEARCH_H_
#define BINARY_SEARCH_H_

#include <stdint.h>
#include <stddef.h>

int32_t binary_search_i32(int32_t* arr, size_t size, int32_t target);
int8_t  binary_search_i8(int8_t* arr, size_t size, int8_t target);

#define binary_search(arr, size, target) _Generic((target), \
    int32_t: binary_search_i32, \
    int8_t:  binary_search_i8,  \
    default: binary_search_i32  \
)(arr, size, target)

#endif