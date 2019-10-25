#pragma once
#include <vector>
#include <glm/glm.hpp>

using std::vector;
using glm::vec2;

class Node
{
public:
	class Edge
	{
	public:
		Edge(Node* start, Node* end, float weight): m_start(start), m_end(end), m_weight(weight) {}

	private:
		Node* m_start;
		Node* m_end;
		float m_weight = 0;
	};
	Node(vec2 position) : m_position(position) {}
	~Node();

	void addEdge(Node* end, float weight);

	const vector<Edge*> getEdges() const { return edges; }

	float fScore = 0;
	Node* prevNode = nullptr;
	bool traversed = false;
private:
	vector<Edge*> edges;
	vec2 m_position;

};

