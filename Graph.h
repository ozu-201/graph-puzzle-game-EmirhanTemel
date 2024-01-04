//
// Created by et018298 on 1/4/2024.
//

#ifndef GRAPH_PUZZLE_GAME_EMIRHANTEMEL_GRAPH_H
#define GRAPH_PUZZLE_GAME_EMIRHANTEMEL_GRAPH_H

#include "EdgeList.h"
#include "Queue.h"
#include <string>

using namespace  std;

class Graph {
private:
    EdgeList *edges;
    int vertexCount;
public:
    explicit Graph(int vertexCount);
    ~Graph();
    void BFS(string &startingNode, string &endNode);
    void addEdge(string from, string to);
};


#endif //GRAPH_PUZZLE_GAME_EMIRHANTEMEL_GRAPH_H
