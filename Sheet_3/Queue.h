#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include "Global.h"
#define MAXQUEUE 100

//typedef int QueueEntry ;

typedef struct queue{
     int front;
     int rear;
    int size;
    QueueEntry entry[MAXQUEUE];
}Queue;


void createqueue(Queue *pq);

void append(QueueEntry e, Queue* pq);

void serve(QueueEntry *pe, Queue* pq);

int isempty(Queue* pq);

int isfull(Queue* pq);

int queuesize(Queue* pq);

void clearqueue(Queue* pq);

void traversequeue(Queue* pq, void (*pf)(QueueEntry));


#endif // QUEUE_H_INCLUDED
