/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	struct node *newnode,*head;
	//head = (struct node*)malloc(sizeof(struct node));
	//head->next = NULL;
	
	int nu,rem,cou=0,div;
	if (N < 0)
	{
		N = N*-1;
	}
	nu = N;

	if (nu / 10 == 0)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		newnode->num = nu % 10;
		newnode->next = NULL;
		head = newnode;
	}
	else
	{
		nu = N;

		while (nu != 0)
		{

			rem = nu % 10;
			newnode = (struct node*)malloc(sizeof(struct node));

			if (cou == 0)
			{
				
				newnode->num = rem;
				newnode->next = NULL;
				head= newnode;
				

				div = nu / 10;
				nu = div;

				
			}
			else{
				newnode->num = rem;
			    newnode->next=head;
				head = newnode;

				div = nu / 10;
				nu = div;
				
			}
			cou++;
		}
	}
	


	return head;
}