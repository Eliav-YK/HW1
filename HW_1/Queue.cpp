#include <iostream>
#include "Queue.h"
using std::cout;
/*
initiating the queue
input: the queue to intitiate and size of it
output:none
*/
void initQueue(Queue* q, unsigned int size)
{
	q->arr = new unsigned int[size];
	q->size = size;
	q->amountInQ = 0;
}
/*
cleaning the queue
input: the queue to clean
output:none
*/
void cleanQueue(Queue* q)
{
	delete(q->arr);
	q->size = 0;
	q->amountInQ = 0;
}
/*
addint to the queue
input: the queue to add to and value to add
output:none
*/
void enqueue(Queue* q, unsigned int newValue)
{
	if (isFull(q))
	{
		std::cout << "out of places";
	}
	else
	{
		q->amountInQ += 1;
		q->arr[q->amountInQ - 1] = newValue;
	}
}
/*
dequeing from the queue
input: the queue to dequeue 
output:the value of the one dequeing
*/
int dequeue(Queue* q)// return element in top of queue, or -1 if empty
{
	int i = 0;
	int holdValue = -1;
	if (!isEmpty(q))
	{
		holdValue = q->arr[0];//1
		for (i = 0; i < q->amountInQ - 1; i++)//1 2 3 4 5
		{
			q->arr[i] = q->arr[i + 1];//
		}
		q->arr[i] = NULL;
		q->amountInQ -= 1;//4
	}
	return holdValue;
}
/*
checking if the queue is empty
input: the queue
output:true or false wether its empty or not
*/
bool isEmpty(Queue* s)
{
	return  s->amountInQ == 0;
}
/*
checking if the queue is full
input: the queue
output:true or false wether its full or not
*/
bool isFull(Queue* s)
{
	return s->size == s->amountInQ;
}