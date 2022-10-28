
// Stack implementation in C

#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#define MAXSTACK 100

// Creating a stack

 //  Stack *ps

void createstack(Stack *ps) {
  ps->top = 0;
}

// Check if the stack is full
int Isfull(Stack *ps) {
  if (ps->top == MAXSTACK)
    return 1;
  else
    return 0;
}

// Check if the stack is empty
int Isempty(Stack *ps) {
  if (ps->top == 0)
    return 1;
  else
    return 0;
}

// Add elements into stack   StackEntry
void push(StackEntry item, Stack *ps) {

    ps->entry[ps->top] = item;
    ps->top++;
}

// Remove element from stack
void pop(StackEntry *pe ,Stack *ps) {
    ps->top--;
  *pe=ps->entry[ps->top];

  }

// Print elements of stack
void traversestack(Stack *ps ,void (*pf)(StackEntry))
{


    int i;
    for ( i = ps->top ; i>0; i--)
    (*pf)(ps->entry[i-1]);

}

void clearstack(Stack *ps){
ps->top =0 ;

}

void stacktop (StackEntry *pe ,Stack *ps){

*pe=ps->entry[ps->top-1];

}

int stacksize(Stack *ps){
return ps->top ;

}


