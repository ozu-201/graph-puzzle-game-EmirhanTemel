//
// Created by et018298 on 1/4/2024.
//

#ifndef GRAPH_PUZZLE_GAME_EMIRHANTEMEL_EDGELIST_H
#define GRAPH_PUZZLE_GAME_EMIRHANTEMEL_EDGELIST_H

#include "Edge.h"

class EdgeList {
private:
    Edge* head;
    Edge* tail;
public:
    EdgeList();
    ~EdgeList();
    bool isEmpty() const;
    void insert(Edge* newEdge);
    Edge* getHead();
    Edge *search(string to) const;
};


#endif //GRAPH_PUZZLE_GAME_EMIRHANTEMEL_EDGELIST_H
