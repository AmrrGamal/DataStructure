#ifndef GLOBAL_H_INCLUDED
#define GLOBAL_H_INCLUDED

typedef struct
{
  int model;
  char name[20];
}car;

#define MAX 100    // MAX for each stack and queue

// for queue
typedef car QueueEntry;
#define MAXQUEUE MAX     // max for queue is 100

// for stack
typedef car StackEntry;
#define MAXSTACK MAX      //  max of stack is 100

#endif // GLOBAL_H_INCLUDED
