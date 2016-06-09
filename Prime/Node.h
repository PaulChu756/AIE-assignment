#pragma once
#include <iostream>

struct Node
{
public:
	int data;
	Node *next;
	Node *root;

	void swapNode(Node *root, Node *a, Node *b);
};