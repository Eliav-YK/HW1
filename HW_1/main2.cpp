#include <iostream>
#include "Stack.h"
#include "LinkedList.h"

#define SIZE 5

void push(Stack* s, unsigned int element);
int pop(Stack* s); // Return -1 if stack is empty

void initStack(Stack* s);
void cleanStack(Stack* s);

bool isEmpty(Stack* s);

void printLinkedList(LinkedList* lst) 
{
	LinkedList* nod = NULL;
	if (lst == nullptr) 
	{
		std::cout << " (empty list)";
	}
	else
	{
		nod = lst->Next;
		while (nod != nullptr)
		{
			std::cout << " " << nod->value;
			nod = nod->Next;
		}
	}
}

int shalom()
{
	bool flag = false;
	int i = 0;
	Stack* s = new Stack();
	initStack(s);
	
	for (i = 1; i <= SIZE + SIZE; i++)
	{
		push(s, i);
	}
	std::cout << "new list:\n";
	printLinkedList(s->list);
	std::cout << "\n";
	for (i = 0; i < SIZE; i++)
	{
		pop(s);
	}
	std::cout << "new list after pop:\n";
	printLinkedList(s->list);
	std::cout << "\n";
	cleanStack(s);
	std::cout << "new list after clean:\n";
	printLinkedList(s->list);
	flag = isEmpty(s);
	std::cout << "is empty:\nexpected : true/1\nreality:"<< flag;
	delete s;
	return 0;
}