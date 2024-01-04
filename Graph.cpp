//
// Created by et018298 on 1/4/2024.
//
#include "Graph.h"

Graph::Graph(int vertexCount){
    this->vertexCount = vertexCount;
    edges = new EdgeList[vertexCount];
    for (int i = 0; i < vertexCount; i++) {
        edges[i] = EdgeList();
    }
}

void Graph::addEdge(std::string from, std::string to) {
    Edge* edge = new Edge(from, to);
    edges[from].insert(edge);
}

Graph::~Graph() {
    delete[] edges;
}

void Graph::BFS(std::string& startingNode, std::string& endNode){
    Edge* edge;
    std::string fromNode, toNode;
    bool *visited = new bool[vertexCount];
    int distance = 0;
    Queue queue = Queue();
    queue.enqueue(Node(startingNode));
    while (!queue.isEmpty()) {
        fromNode = queue.dequeue()->getData();
        edge = edges[fromNode]->getHead();
        while (edge != nullptr) {
            toNode = edge->getTo();
            if(!visited[toNode]) {
                distance++;
                visited[toNode] = true;
                queue.enqueue(Node(toNode));
            }
            edge = edge ->getNext();
        }
    }


}