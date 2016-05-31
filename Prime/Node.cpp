#include <iostream>
#include<stdio.h>
#include<stdlib.h>

/*
Create a function that swaps any two Nodes in a singly Link List
Assume you do not have access to the data component of the element
(Therefore you cannot just swap the data)

So I created a struct Node, in that Node they have data and the Node next going to the next node.
I understand the single link list is 0->1->2->3->4->5 which are all connected by pointers.
The input node will go through the list by going through other nodes to find the desire node.
Then the other node will have to traversal to the other node's placement for "Swapping".
*/

struct Node
{
	int data;
	Node *next;
};

void swapNode(Node *a, Node *b)
{
	// Getting confused with Root/currentNode with next
	Node *root = b;

	Node *t = b;
	b = a->next;
	a = t->next;

	/*Node *t = b.next;
	b.next = a.next;
	a.next = t;*/
}

Node zero;
Node one;
Node two;
Node three;
Node four;
Node five;

void print()
{
	std::cout << zero.data;
	std::cout << "->" << one.data;
	std::cout << "->" << two.data;
	std::cout << "->" << three.data;
	std::cout << "->" << four.data;
	std::cout << "->" << five.data << std::endl;
}