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
	while (currentNode != NULL)
	{
		currentNode = currentNode->next;
	}

	// swap parents 
	if (currentNode->next == a)
	{
		currentNode->next = b;
	}

	if (currentNode->next == b)
	{
		currentNode->next = a;
	}

	// check swapping next to each other
	// if swapping next to each other, grabs other's next
	// while the other one grabs the previous's next

	// check swapping on the ends
	// when swapping the ends, one needs to grab the other's one next
	// while the other one will be null

	// check when swapping in between numbers
	// -> is for pointing
	Node *t = b->next;
	b->next = a->next;
	a->next = t;
}