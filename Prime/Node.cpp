#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include "Node.h"

/*
Create a function that swaps any two Nodes in a singly Link List
Assume you do not have access to the data component of the element
(Therefore you cannot just swap the data)

So I created a struct Node, in that Node they have data and the Node next going to the next node.
I understand the single link list is 0->1->2->3->4->5 which are all connected by pointers.
The input node will go through the list by going through other nodes to find the desire node.
Then the other node will have to traversal to the other node's placement for "Swapping".
*/

void Node::swapNode(Node *root, Node *a, Node *b)
{
	// check if given same answer
	if (a == b)
		return;

	// check if input are actual answers
	if (a == NULL || b == NULL)
		return;
	
	// need root node, and current node and travesal through list
	Node *currentNode = root;
	Node *aParent = NULL;
	Node *bParent = NULL;
	Node *currentLast = NULL;

	while (currentNode != NULL)
	{
		if (currentNode == a)
		{
			aParent = currentLast;
		}

		if (currentNode == b)
		{
			bParent = currentLast;
		}

		// check swapping next to each other
		// if swapping next to each other, grabs other's next
		// while the other one grabs the previous's next
		if (a->next == b)
		{
			a->next = b->next;
			b->next = a;
			aParent = b;
		}

		if (b->next == a)
		{
			b->next = a->next;
			a->next = b;
			bParent = a;
		}

		// check swapping on the ends
		// when swapping the ends, one needs to grab the other's one next
		// while the other one will be null
		if (currentNode->next == b)
		{
			b->next = a->next;
			a->next = NULL;
		}

		if (currentNode->next == a)
		{
			a->next = b->next;
			b->next = NULL;
		}

		currentLast = currentNode;
		currentNode = currentNode->next;
	}

	// check when swapping in between numbers
	// -> is for pointing
	Node *t = b->next;
	b->next = a->next;
	a->next = t;
	aParent->next = b;
	bParent->next = a;
}