#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

#include "pilha.h"

Stack *stackInit(void)
{
    Stack *s = (Stack*)malloc(sizeof(*s));
    assert(s != NULL);
    s->head = NULL;
    return s;
}

void push(Stack *stack, int value)
{
    List *newNode = (List*)malloc(sizeof(*newNode));
    assert(newNode != NULL);

    newNode->info = value;

    if(stackIsEmpty(stack)) {
        newNode->next = NULL;
    }
    else {
        newNode->next = stack->head;
    }

    stack->head = newNode;
}

int pop(Stack *stack)
{
    if(stackIsEmpty(stack)) {
        printf("pilha vazia.\n");
        return -1;
    }
    else {
        int info = stack->head->info;
        stack->head = stack->head->next;
        return info;
    }
}

int stackIsEmpty(Stack *stack)
{
    return (stack->head == NULL);
}

void freeStack(Stack *stack)
{
    free(stack);
}

void showStack(Stack *stack)
{
    List *p = stack->head;
    while(p != NULL) {
        printf("%d ", p->info);
        p = p->next;
    }
    printf("\n");
}
