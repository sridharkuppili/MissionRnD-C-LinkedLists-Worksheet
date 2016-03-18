/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head)
{
	struct node *temp,*cur;
	int temp0=0, temp1=0, temp2=0;
	temp = head;
	while (temp != NULL)
	{
		if (temp->data == 0)
		{
			temp0++;
		}
		else if (temp->data == 1)
		{
			temp1++;
		}

		else if (temp->data == 2)
		{
			temp2++;
		}
		temp = temp->next;
	}

		cur = head;
		while (temp0 > 0)
		{
			cur->data = 0;
			cur = cur->next;
			temp0--;
		}
		while (temp1 > 0)
		{
			cur->data = 1;
			cur = cur->next;
			temp1--;
		}
		while (temp2 > 0)
		{
			cur->data = 2;
			cur = cur->next;
			temp2--;
		}

	

	
}