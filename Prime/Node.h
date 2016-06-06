#pragma once
#include <iostream>

struct Node
{
public:
	int data;
	Node *next;

	void swapNode(Node *a, Node *b);
	void print();
};