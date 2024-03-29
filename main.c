
#include <assert.h>
#include <limits.h>
#include "Stack.h"
#include <stdio.h>

void testStack()
{
    struct StackNode *root = NULL;

    assert(isEmpty(root) == 1);

    push(&root, 10);
    assert(peek(root) == 10);

    assert(isEmpty(root) == 0);

    push(&root, 20);
    assert(pop(&root) == 20);

    assert(pop(&root) == 10);

    assert(pop(&root) == INT_MIN);

    assert(peek(root) == INT_MIN);

    push(&root, 30);
    deleteStack(&root);
    assert(isEmpty(root) == 1);
}

int main()
{
    testStack();
    printf("All tests passed.\n");
    return 0;
}
