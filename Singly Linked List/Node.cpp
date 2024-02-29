#include"Node.h"

Node::Node()
{
	value = 0;
	next = NULL;
}

Node::Node(int v)
{
	value = v;
	next = NULL;
}

Node::~Node()
{

}

void Node::set(int v)
{
	value = v;
}

int Node::get()
{
	return value;
}