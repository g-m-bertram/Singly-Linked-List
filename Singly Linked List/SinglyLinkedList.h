#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

#include"Node.h"

class SinglyLinkedList
{
public:
	SinglyLinkedList();
	SinglyLinkedList(Node *newNode);
	~SinglyLinkedList();

	void insert(Node *newNode);
	void display();
	void remove();
	void traversal();
	void removeFront();

private:
	Node *head;
};

#endif