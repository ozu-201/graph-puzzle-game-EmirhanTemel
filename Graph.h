//
// Created by et018298 on 12/14/2023.
//

#ifndef GRAPH_PUZZLE_GAME_EMIRHANTEMEL_GRAPH_H
#define GRAPH_PUZZLE_GAME_EMIRHANTEMEL_GRAPH_H

#include "EdgeList.h"
#include "AbstractGraph.h"

class Graph : public AbstractGraph{
private:
    EdgeList *edges;
public:
    explicit Graph(int vertexCount);
    ~Graph();
    void addEdge(int from, int to);
protected:
    void depthFirstSearch(bool* visited, int fromNode) override;
    void breadthFirstSearch(bool* visited, int startNode) override;
    Edge* edgeList(int& edgeCount) override;
};

#endif //GRAPH_PUZZLE_GAME_EMIRHANTEMEL_GRAPH_H
