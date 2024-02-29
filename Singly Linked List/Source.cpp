#include"Node.h"
#include"SinglyLinkedList.h"

int main()
{
	Node *node1;
	node1 = new Node;
	Node *node2;
	node2 = new Node(10);

	cout << node1->get() << " " << node2->get() << endl;

	SinglyLinkedList *sll;
	sll = new SinglyLinkedList(node1);
	sll->insert(node2);
	sll->display();
	sll->remove();
	sll->traversal();

	delete node1;
	delete node2;
	delete sll;

	cin.get();
	return 0;
}