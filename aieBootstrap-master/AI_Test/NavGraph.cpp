#include "NavGraph.h"
#include <queue>
#include <cmath>


NavGraph::NavGraph()
{
}


NavGraph::~NavGraph()
{
}

const vector<Node*> NavGraph::FindRoute(Node * start, Node * end)
{
	auto cmp = [](Node* lhs, Node* rhs)
	{
		return lhs->fScore > rhs->fScore;
	};
	std::priority_queue<Node*, vector<Node*>, decltype(cmp)> queue(cmp);
	
	for (Node* node : m_nodes)
		queue.push(node);

	return vector<Node*>();
}

float magnitude(vec2 vector)
{
	return sqrt(pow(vector.x, 2) + pow(vector.y, 2));
}
