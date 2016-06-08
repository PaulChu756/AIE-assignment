#pragma once
#include <iostream>

struct Node
{
public:
	int data;
	Node *next;
	Node *root;

	void swapNode(Node *a, Node *b);
	void print();
};