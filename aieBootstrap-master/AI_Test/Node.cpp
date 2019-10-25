#include "Node.h"

Node::~Node()
{
	for (auto edge : edges)
		delete edge;
}

void Node::addEdge(Node * end, float weight)
{
	Edge* newEdge = new Edge(this, end, weight);
	edges.push_back(newEdge);
	
}
