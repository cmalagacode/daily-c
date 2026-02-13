#include "stack.h"
#include <stdlib.h>

struct Stack* stack_create(const int capacity) {
    struct Stack* stack = calloc(1, sizeof(struct Stack));
    stack->capacity = capacity;
    stack->data = calloc(capacity, sizeof(int));
    stack->size = 0;
    stack->top = -1;
    stack->bottom = 0;
    return stack;
}

void stack_push(struct Stack* stack, int val) {
    if (stack->size == stack->capacity) {
        return;
    }
    stack->data[++stack->top] = val;
    stack->bottom++;
    stack->size++;
}

int stack_pop(struct Stack* stack) {
    if (stack->size == 0) return 0;
    int val = stack->data[stack->top--];
    stack->size--;
    return val;
}

bool stack_is_empty(struct Stack* stack) {
    return stack->size == 0;
}

int stack_peek(struct Stack* stack) {
    if (stack_is_empty(stack)) return 0;
    return stack->data[stack->top];
}