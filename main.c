#include <stdio.h>
#include <stdlib.h>

#include "quicksort.h"
#include "slink.h"
#include "stack.h"
#include "compare.h"


int main(void) {
    int b[] = {4, 3, 2, 1};
    quick_sort(b, 0, (int)(sizeof(b) / sizeof(b[0])) - 1);
    for (int i = 0; i < 4; i++)
        printf("%d ", b[i]);
    bool result = is_greater(1, 2);
    printf("%d", result);
    printf("\n======================\n");
    struct Stack *stack = stack_create(10);
    stack_push(stack, 1);
    printf("%d\n", stack_peek(stack));
    stack_pop(stack);
    printf("%d", stack_peek(stack));
    free(stack->data);
    free(stack);
    printf("\n======================\n");
    return 0;
}
