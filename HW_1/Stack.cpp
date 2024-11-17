#include "Stack.h"
#include "LinkedList.h"
#include <iostream>

/*
initiating a stack
input: stack to initiate
output:none
*/
void initStack(Stack* s) 
{
    s->list = new LinkedList; 
    s->list->Next = nullptr;
}

/*
Push an element onto the stack
input:stack and element to push 
output:none
*/
void push(Stack* s, unsigned int element) 
{
    addToList(s->list, element);
}

// Pop an element from the stack
int pop(Stack* s) 
{
    int holdV = -1;
    if (!isEmpty(s)) 
    {
        holdV = removeFromList(s->list);
    }
    return holdV;
}
/*
checking if the stack is empty
input: the stack
*/
bool isEmpty(Stack* s) 
{
    return s->list->Next == nullptr;
}

/*
Clean the stack by freeing all nodes
input: the stack
output:none
*/
void cleanStack(Stack* s) 
{
    LinkedList* lst = s->list->Next;  
    LinkedList* temp = lst;
    while (lst != nullptr)
    {
        temp = lst;
        lst = lst->Next;
        delete temp;
    }
    s->list->Next = nullptr;
}
