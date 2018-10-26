#include <iostream>
#include <algorithm>
#include "List.h"
using std::cin;
using std::cout;

int count;


List::List()
{
	head = NULL;
	current = NULL;
	temp = NULL;
}

void List::addNode(int addData)								// got this from https://www.youtube.com/watch?v=3gZ7F31Mwi0&list=PLTxllHdfUq4fewZGVFPhzbmHTQC2UH7PJ&index=4, Paul Programming.
{
	nodePntr n = new node;
	n->next = NULL;
	n->data = addData;

	if (head != NULL)	//If a list is set up already.
	{
		current = head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = n;
	}
	else
	{
		head = n;	//Head will point to the new front.
	}
}


void List::deleteNode(int delData)					// got this from https://www.youtube.com/watch?v=Gn_C91cGsbw&index=5&list=PLTxllHdfUq4fewZGVFPhzbmHTQC2UH7PJ, Paul Programming.
{
	nodePntr delPtr = NULL;
	temp = head;
	current = head;

	while (current != NULL && current->data != delData)
	{
		temp = current;
		current = current->next;
	}

	if (current == NULL)
	{
		delete delPtr; // allows us to make sure that there is no un-neccesary dta
	}
	else
	{
		delPtr = current;
		current = current->next;
		temp->next = current;
		if (delPtr == head)
		{
			head = head->next;
			temp = NULL;

		}
		delete delPtr;
	}
}


int List::MaxNum()														
{
	int max = INT_MIN;
	nodePntr start;
	count = 1;
	start=head;
	while (start != NULL)
	{
		
				if (max < start->data) 
				{
					max = start->data;
				}
				
				
				
			
			start = start->next;
		
		
	}
	
	return max;
	
}

int List::MinNum()
{
	int min = INT_MAX;
	nodePntr start;
	start = head;
	while (start != NULL)
	{
			if (min > start->data && start->data > 0)
			{
				min = start->data;
			}
					
		start = start->next;
	}

	return min;
}





int List::Sum()
{
	int sum = 0;
	current = head;
	int temp = 0;
	while (current != NULL)
	{
		if (current->data > 0)
		{
			sum += current->data;
			current = current->next;
		}
		else if (current->data < 0)
		{ 
			temp = current->data;
			deleteNode(temp);

		}
		
	}
	return sum;
}

int List::ValidCount()
{
	int counter = 0;
	current = head;
	while (current != NULL)
	{
		if (current->data > 0 )
		{
			counter++;
			current = current->next;
		}
		else if (current->data <= 0 ||  current->data > INT_MAX)
		{
			deleteNode(current->data);
		}
	}
	
	return counter;
	
}




