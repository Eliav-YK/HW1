#include "LinkedList.h"

/* 
add a value to a list
input:list and a value
output:none
*/
void addToList(LinkedList* list, int value) 
{
    LinkedList* temp = new LinkedList;
    temp->value = value;
    temp->Next = list->Next;
    list->Next = temp;
}
/*
removing the top value from the list
input: the list
output: the value removed
*/
int removeFromList(LinkedList* list) 
{
    int removedV= -1;
    LinkedList* temp = list->Next; 
    if (list->Next != nullptr) 
    {
        removedV = temp->value;
        list->Next = temp->Next;
        delete temp;
    }
    return removedV;
}
