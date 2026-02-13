#ifndef STACK_H_
#define STACK_H_

struct Stack {
    int top;
    int bottom;
    int capacity;
    int* data;
    int size;
};

struct Stack* stack_create(const int capacity);

void stack_push(struct Stack* stack, int vall);

int stack_pop(struct Stack* stack);

bool stack_is_empty(struct Stack* stack);

int stack_peek(struct Stack* stack);

#endif
