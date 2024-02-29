#include"SinglyLinkedList.h"

SinglyLinkedList::SinglyLinkedList()
{
	head = NULL;
}

SinglyLinkedList::SinglyLinkedList(Node *newNode)
{
	head = newNode;
}

SinglyLinkedList::~SinglyLinkedList()
{

}

void SinglyLinkedList::insert(Node *newNode)
{
	if (head == NULL)
	{
		head = newNode;
	}
	else
	{
		newNode->next = head;
		head = newNode;
	}
}

void SinglyLinkedList::display()
{
	Node* tempNode;
	tempNode = head;

	while (tempNode != NULL)
	{
		cout << tempNode->value << " ";
		tempNode = tempNode->next;
	}

	cout << endl;
}

void SinglyLinkedList::remove()
{
	Node *lastNode;
	lastNode = head;

	if (head != NULL)
	{
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}

		if (head != lastNode)
		{
			Node *tempNode;
			tempNode = head;
			while (tempNode->next != lastNode)
			{
				tempNode = tempNode->next;
			}

			delete lastNode;

			tempNode->next = NULL;
		}
		else
		{
			delete lastNode;
			head = NULL;
		}
	}
}

void SinglyLinkedList::traversal()
{
	Node* tempNode;
	tempNode = head;

	cout << "head: " << head << endl;

	while (tempNode != NULL)
	{
		cout << "node address: " << tempNode << " ";
		cout << "next of the node: " << tempNode->next << " ";
		tempNode = tempNode->next;
	}

	cout << endl;
}

void SinglyLinkedList::removeFront()
{
	if (head != NULL) // if singlylinkedlist is not empty
	{
		Node *tempNode;
		tempNode = head;
		if (tempNode->next != NULL) // if list has more than one node
		{
			Node *tempNode1;
			tempNode1 = head->next;
			delete tempNode;
			head = tempNode1;
		}
		else
		{
			delete tempNode;
			head = NULL;
		}
	}
	else
	{
		cout << "Singly Linked List is empty\n";
	}
}