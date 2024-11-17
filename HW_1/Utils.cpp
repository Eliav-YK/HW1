#include "Utils.h"
#include "Stack.h"
#define SIZE 4
#define NUM_OF_INPUTS 10
/*
reversing an array with stack
input:the array and its size
output:none
*/
void reverse(int* nums, unsigned int size)
{
	int i = 0;
	Stack* s = new Stack();
	initStack(s);
	for (i = 0; i < size; i++)
	{
		push(s, nums[i]);
	}
	for (i = 0; i < size; i++)
	{
		nums[i] = pop(s);
	}

}
/*
asking the user for 10 inputes for array to reverse it using a stack
input:none
output:the reversed array
*/
int* reverse10()
{
	int i = 0;
	int* arr = new int[NUM_OF_INPUTS];
	for (i = 0; i < NUM_OF_INPUTS; i++)
	{
		std::cout << "enter values: ";
		std::cin >> arr[i];
	}
	reverse(arr, NUM_OF_INPUTS);
	return arr;
}
int main4()
{
	int i = 0;
	int* arr = new int[SIZE];
	int* arr2 = NULL;
	for (i = 0; i < SIZE; i++)
	{
		arr[i] = i+1;
	}
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << ",";
	}
	std::cout << "\n";
	reverse(arr, SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		std::cout<< arr[i]<< ",";
	}
	arr2 = reverse10();
	for (int i = 0; i < NUM_OF_INPUTS; i++)
	{
		std::cout << arr2[i] << ",";
	}
	return 0;
}