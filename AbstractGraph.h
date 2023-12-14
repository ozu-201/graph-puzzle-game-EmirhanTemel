//
// Created by et018298 on 12/14/2023.
//

#ifndef GRAPH_PUZZLE_GAME_EMIRHANTEMEL_ABSTRACTGRAPH_H
#define GRAPH_PUZZLE_GAME_EMIRHANTEMEL_ABSTRACTGRAPH_H

#include "Path.h"
#include "Edge.h"

class AbstractGraph {
protected:
    int vertexCount;
    virtual void depthFirstSearch(bool* visited, int fromNode) = 0;
    virtual void breadthFirstSearch(bool* visited, int startNode) = 0;
    virtual Edge* edgeList(int& edgeCount) = 0;
    Path* initializePaths(int source) const;
public:
    explicit AbstractGraph(int vertexCount);
    int connectedComponentDfs();
    int connectedComponentBfs();
};


#endif //GRAPH_PUZZLE_GAME_EMIRHANTEMEL_ABSTRACTGRAPH_H