#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Stack{
int top;
int capacity;
int *arr;
};
struct Stack *createstack(int capacity)
{
struct Stack *stack=(struct Stack*)malloc(sizeof(struct Stack));
if(!stack)
    return NULL;
stack->top=-1;
stack->capacity=capacity;

