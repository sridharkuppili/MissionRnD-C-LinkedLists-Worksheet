/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K)
{
	struct node *temp0, *temp1;
	int count = 0;

	
	if (head != NULL &&K>0 && K != 1)
	{

		temp0 = head;
		temp1 = temp0;
		while (temp0->next != NULL)
		{
			if (count == K - 1)
			{
				count = 0;
				temp1->next = temp0->next;
				temp0 = temp0->next;
			}
			else
			{
				temp1 = temp0;
				temp0 = temp0->next;
				count++;
			}
		}
		if (count == K - 1)
		{
			temp1->next = NULL;
		}
		return head;

	}
	else if (K == 1)
	{
		return NULL;
	}

	else
		return NULL;

		
	
}