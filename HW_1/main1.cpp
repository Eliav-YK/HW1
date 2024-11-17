#include "Queue.h"
#include <iostream>
#define CHECK_VALUE_1 1
#define CHECK_VALUE_2 2
#define CHECK_VALUE_3 3
#define CHECK_VALUE_4 4
#define CHECK_VALUE_5 5
#define SIZE 5

void printArr(Queue* q)
{
    int i = 0;
    for (i = 0; i < q->size; i++)
    {
        std::cout << " " << q->arr[i];
    }
}

int main2()
{
    bool flag = NULL;
    int i = 0;
    Queue* q = new Queue();
    initQueue(q, SIZE);
    for (i = 1; i <= SIZE; i++)
    {
        enqueue(q, i);
    }
    std::cout << "array is:" ;
    printArr(q);
    dequeue(q);
    std::cout << "array is:";
    printArr(q);
    flag = isEmpty(q);
    std::cout << "\nempty? ";
    std::cout << flag;
    flag = isFull(q);
    std::cout << "\nfull? ";
    std::cout << flag;
    std::cout << "\n1 == true 0 == false";
    enqueue(q, 1);
    flag = isFull(q);
    std::cout << "\nfull? ";
    std::cout << flag;
    cleanQueue(q);
    std::cout << "\ncleared array:  ";
    printArr(q);
    return 0;
}