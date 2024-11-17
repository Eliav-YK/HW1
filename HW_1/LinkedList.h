#ifndef LinkedList_h
#define LinkedList_h
#include <iostream>
typedef struct LinkedList
{
	int value;
	LinkedList* Next;

} LinkedList;

void addToList(LinkedList* list, int value);
int removeFromList(LinkedList* list);
#endif
