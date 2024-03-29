#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

// Sukurimas naujo elemento su reiksme (Patariama nenaudoti ir naudoti tik push funkcija)
struct StackNode *newNode(int data)
{
    struct StackNode *stackNode = (struct StackNode *)malloc(sizeof(struct StackNode));
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}

// Patikrina ar stackas tuscias, grazina 1 jei tuscias, 0 jei ne
int isEmpty(struct StackNode *root)
{
    return !root;
}

// Prideda nauja elementa i stacka
void push(struct StackNode **root, int data)
{
    struct StackNode *stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
}

// Isima elementa is stacko ir grazina jo reiksme (jei stackas tuscias grazina INT_MIN)
int pop(struct StackNode **root)
{
    if (isEmpty(*root))
        return INT_MIN;

    struct StackNode *temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);

    return popped;
}

// Grazina virsutini elementa is stacko (jei stackas tuscias grazina INT_MIN)
int peek(struct StackNode *root)
{
    if (isEmpty(root))
        return INT_MIN;
    return root->data;
}

// Istrina visa stacka
void deleteStack(struct StackNode **root)
{
    struct StackNode *temp, *p;
    p = *root;
    while (p != NULL)
    {
        temp = p;
        p = p->next;
        free(temp);
    }
    *root = NULL;
}
