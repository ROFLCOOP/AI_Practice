#pragma once
#include "Node.h"
#include <vector>
#include <glm/glm.hpp>

class NavGraph
{
public:
	NavGraph();
	~NavGraph();

	const vector<Node*> FindRoute(Node* start, Node* end);

private:
	vector<Node*> nodes;
};

