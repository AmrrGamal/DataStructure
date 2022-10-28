#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "Global.h"
#define MAXSTACK 100

//typedef int StackEntry ;

// Creating a stack
typedef struct stack
{
    StackEntry entry [MAXSTACK];
    int top;
} Stack ;

void createStack(Stack *) ;

// Check if the stack is full
int Isfull(Stack *) ;


// Check if the stack is empty
int Issempty(Stack *) ;

// Add elements into stack
void push(StackEntry,Stack *);

// Remove element from stack
void pop( StackEntry *,Stack *) ;

void stacktop (StackEntry *,Stack *);

void clearstack(Stack *);

int stacksize(Stack *);


// Print elements of stack
void traversestack(Stack *, void (*) (StackEntry )) ;

// Driver code



#endif // STACK_H_INCLUDED
