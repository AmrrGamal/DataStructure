#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"
#define MAXQUEUE 100


void createqueue(Queue *pq)
{
    pq->front= 0;
    pq->rear = -1;
    pq->size = 0;
}

void append(QueueEntry e, Queue* pq)
{
    pq->rear = (pq->rear + 1) % MAXQUEUE;
    pq->entry[pq->rear] = e;
    pq->size++;
}

void serve(QueueEntry *pe, Queue* pq)
{
    *pe = pq->entry[pq->front];
    pq->front = (pq->front + 1) % MAXQUEUE;
    pq->size--;
}

int isempty(Queue* pq)
{
    return !pq->size;
}
int isfull(Queue* pq)
{
    return (pq->size == MAXQUEUE);
}

int queuesize(Queue* pq)
{
    return pq->size;
}
void clearqueue(Queue* pq)
{
    pq->front = 0;
    pq->rear  = -1;
    pq->size  = 0;
}

void traversequeue(Queue* pq, void (*pf)(QueueEntry))
{
    int pos, s;
    for(pos=pq->front, s=0; s<pq->size; s++)
    {
        (*pf)(pq->entry[pos]);
        pos=(pos+1)%MAXQUEUE;
    }
}





