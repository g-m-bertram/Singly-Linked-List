#ifndef NODE_H
#define NODE_H

#include<iostream>
using namespace std;

class Node
{
	friend class SinglyLinkedList;
public:
	Node();
	Node(int v);
	~Node();

	void set(int v);
	int get();

private:
	int value;
	Node *next;
};

#endif